/*//  Copyright 2014 Karl V. P. Bertin
////
////  Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:
////
////    1.  Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
////
////    2.  Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.
////
////    3.  Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.
////
*///  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

//#include "../include/stdlib.h"
#include <stdio.h> //	debug

#undef itoa
#undef uitoa

#define INT_DIGITS 19 // Since 64-bit signed integers range from -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807, so strlen( itoa( 9223372036854775807 ) ) == 19. /Users/kvpb/.files/bin/chrcnt.rb
#define UINT_DIGITS 20 // Since 64-bit unsigned integers range from 0 to 2**64 - 1 == 18446744073709551615, so strlen(itoa( 18446744073709551615 )) == 20. https://www.wolframalpha.com/input?i=%28+2**64+%29+-+1

char* itoa( int i )
{
	static char b[ INT_DIGITS + 2 ]; //buf[ INT_DIGITS + 1 + 1 ] //buffer[ 1 + INT_DIGITS + 1 ] // Allocate enough memory for INT_DIGITS digits, a - (or minus) sign and the \0 (or NULL) terminator. (i) Statically allocate the buffer b, as I need to stably locate it in memory, while I execute the program, or else pointer arithmetic may not work properly. /!\ But so this is C89, not ANSI C.
	char* p = b + INT_DIGITS + 1; // Mind a potential leading minus sign, and point to (or place the pointer p at) the terminator \0 of the buffer b.

	if ( i >= 0 ) // If i is a positive integer...
	{
		--p; // Decrement the pointer p.
		*p = '0' + ( i % 10 ); // Dereference p in its current state, euclidean-ly divide i in its current state by 10, add the remainder to 48 ('0'), and assign the result[ing value from the ASCII table, an ASCII character] to p in its current state.
		//*--p = '0' + ( i % 10 ); // `*--p` first decrements the pointer p and then dereferences (or accesses what is pointed at by) the pointer p. So this converts the number at the previous position starting from the last or latest one to that of the glyph corresponding to the current state of i in decimal representation in the ASCII table. I have to do this at least once, as p initially points to the null-terminating \0.
		i = i / 10; // Divide i by 10.
		while ( i != 0 )
		{
			--p;
			*p = '0' + ( i % 10 );
			i = i / 10;
		} // The pointer p now points to the beginning of the buffer b, and the above code just converted the integer i to its decimal representation and stored it in the buffer b.
	}
	else //else if ( i < 0 ) // If i is a negative integer...
	{
		--p;
		*p = '0' - ( i % 10 ); // -( -i ) == -1( -i ) == -1 * -i == +i, or else if e.g. i = -4, i % 10 = 6, whereas if e.g. i = 4, i % 10 = 4.
		i = i / 10;
		while ( i != 0 )
		{
			--p;
			*p = '0' - ( i % 10 );
			i = i / 10;
		}
		--p;
		*p = '-';
		// Prepend a leading - (or minus or negative) sign (or hyphen) to the string of digits.
	}
	return p;
}

char* uitoa( unsigned int i )
{
	static char b[ UINT_DIGITS + 1 ]; // Allocate enough memory for INT_DIGITS digits and the \0 (or NULL) terminator. (i) The UITOA function converts unsigned-int-type data, strictly positive integers, so it does not need to allot space for a leading negative sign.
	char* p = b + UINT_DIGITS;

	--p;
	*p = '0' + ( i % 10 );
	i = i / 10;
	while ( i != 0 )
	{
		--p;
		*p = '0' + ( i % 10 );
		i = i / 10;
	}
	return p;
}

int main()
{
	unsigned int mU = -4294967294;
	  signed int m  = -2147483648;
	         int i  =  0;
	  signed int M  =  2147483647;
	unsigned int MU =  4294967294;

	printf("m = %d, m: %s;\n", mU, itoa( mU )); // ha ha ha ha i win oh lucky me
	printf("m = %d, m: %s;\n", m, itoa( m ));
	while ( i < 256 )
	{
		printf("i = %d, i: %s;\n", i, itoa( i ));
		i++;
	}
	printf("M = %d, M: %s;\n", M, itoa( M ));
	printf("M = %u, M: %s;\n", MU, uitoa( MU ));
	return 0; // I am coming to the United States.
} //	debug code

/*//	itoa.c
////	IToA
////	my brain, https://en.wikipedia.org/wiki/Pointer_(computer_programming)#C_pointers, https://www.ibm.com/docs/en/i/7.2?topic=pointers-pointer-arithmetic, https://www.ibm.com/docs/en/i/7.2?topic=expressions-increment-operator#incex, https://en.wikipedia.org/wiki/Static_(keyword)#Static_local_variables, http://cslibrary.stanford.edu/106/, https://www.ibm.com/docs/en/informix-servers/14.10?topic=termination-character-string
////
////	Karl V. P. Bertin `kvpb`
////	+1 (DDD) DDD-DDDD
////	+33 A BB BB BB BB
////	local-part@domain
////	https://www.linkedin.com/in/karlbertin
////	https://twitter.com/yougotkarld
////	https://github.com/kvpb
////	https://www.instagram.com/add/karlbertin
////	https://vm.tiktok.com/ZSwAmcFh/
////
////	          We're startin' up; now, we're on our way...
////	          Leaving all our yesterdays behind.
////	          Something special that we wanna say:
////	          Happiness is just a state of mind.
////	  ,'/     Flash back!...
////	 / ''/    To the days when the nights were young...
////	''/ /     Flashback!
////	 / ''/    When we could do no wrong.
////	''/ /     Flashback!
////	 / ''/    We used to dance to the light of dawn...
////	''/ /     Flashback!
*///	 /,'      When our hearts were so strong!
