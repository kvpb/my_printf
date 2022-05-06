/*//  Copyright 2021 Karl V. P. Bertin
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
//#include "../include/xlocale.h"
#include <ctype.h> // isdigit, isspace //	unused code
#include <stddef.h> // size_t
//#include <stdbool.h> // bool
//#include <stdlib.h> // strtol //	unused code // atoi, atoi_l, atof, atof_l //	debug code
//#include <xlocale.h> // locale_t
#include <stdio.h> // printf //	debug code

#undef isdigit
#undef isspace
//#undef strtol
#undef atoi
//#undef atoi_l
//#undef atof
//#undef atof_l

//long strtol(const char* restrict s, char** restrict p_N, int b ); //long strtol(const char *restrict str, char **restrict endptr, int base);

int isdigit(int c)
{
	return ( ( 48 <= c && c <= 57 ) ? 1 : 0 ); //return ( ( isalnum(c) && !isalpha(c) ) ? 1 : 0 );
} // KVPB's IsDigit

int isspace(int c)
{
	return ( ( ( 9 <= c && c <= 13 ) || ( c == 32 ) ) ? 1 : 0 );
} // KVPB's IsSpace

int atoi( const char* a ) //int atoi(const char *nptr); //int atoi(const char *str);
{
	size_t i = 0;
	int c = 1; //bool Z__minus = false;
	int k = 0;

	while (isspace((int) a[k]))
		k++;
	if (a[k] == '-' || a[k] == '+')
	{
		if (a[k] == '-')
			c *= -1; //Z__minus = true;
		k += 1;
	}
	while (isdigit((int) a[k]))
	{
		i = i * 10 + a[k] - '0'; // 2021.12.02  Because '0' == 48. I think I need to do something similar, if I have to convert pointer addresses to strings for My PRINTF. // 2022.02.02  As it turns out, it fails to convert numbers the size of a MAX_SIZE. // 2022.02.22  In PRINTF, I needed to check whether each value was in the range [ 0, 9 ] or [ 10, 15 ]; in ATOI, I must check whether it is in the range [ 0, 9 ], so I can simply 'condition' it with IsDigit. // 2022.02.22@22:20:22  Wait. What if I get an octal or hexadecimal number? Fuck, fuck, FUCK.
		k++;
	}
	//if ( Z__minus == true )
	//	return -i;
	//else
	//	return i;
	return c * i; // 2022.02.22@22:21:45  It seems Apple's ATOI relies on STRTOL. https://opensource.apple.com/source/Libc/Libc-186/stdlib.subproj/atoi.c.auto.html And IIRC, STRTOL handles the base. I had started to make my own. I did not finish it. I never came back to it. So where did I leave that file?
} // KVPB's AToI
/*int atoi(const char* a)
{
	return (int) strtol(a, (char**) NULL, 10);
}*/ // KVPB's ATOI

//int atoi_l( const char *s, locale_t l ); //int atoi_l(const char *str, locale_t loc);

//double atof( const char* a ); //double atof(const char *str);

//double atof_l( const char* a, locale_t l ); //double atof_l(const char *str, locale_t loc);

/*int main()
{
	const char* a_minusM = "-4294967295"; //"-4294967296";
	const char* a_minus1 = "-1";
	const char* a_0      =  "0";
	const char* a_1      =  "1";
	const char* a_10     =  "10";
	const char* a_M      =  "4294967296"; //"4294967296";
	//const char* s = ;
	//locale_t l = ;

	printf("a_minusM: %s, a_minusM = %d;\n", a_minusM, atoi( a_minusM ));
	printf("a_minus1: %s, a_minus1 = %d;\n", a_minus1, atoi( a_minus1 ));
	printf("a_0: %s, a_0 = %d;\n", a_0, atoi( a_0 ));
	printf("a_1: %s, a_1 = %d;\n", a_1, atoi( a_1 ));
	printf("a_10: %s, a_10 = %d;\n", a_10, atoi( a_10 ));
	printf("a_M: %s, a_M = %d;\n", a_M, atoi( a_M ));
	//printf("0\t%d\n", atoi(s));
	//printf("0\t%d\n", atoi_l(s, l));
	//printf("0\t%f\n", atof(s));
	//printf("0\t%f\n", atof_l(s, l));
	return 0;
}*/ //	debug code

/*//	atoi.c
////	AToI
////
////	Karl V. P. Bertin `kvpb`
////	+1 (DDD) DDD-DDDD
////	+33 A BB BB BB BB
////	local-part@domain
////	https://www.linkedin.com/in/karlbertin
////	https://twitter.com/kvpbx
////	https://github.com/kvpb
////	https://www.instagram.com/add/karlbertin
////	https://vm.tiktok.com/ZSwAmcFh/
////
////	The AtoI function converts to int representation the initial portion of the string pointed to by s.
////	
////	'The atoi() function converts the initial portion of the string 
////	pointed to by nptr to int. The behavior is the same as strtol(nptr,
////	 NULL, 10); except that atoi() does not detect errors.'
////	https://linux.die.net/man/3/atoi
////	
////	'The strtol() function converts the string in str to a long value.'
////	'The conversion is done according to the given base [...] between 2 
////	and 36 inclusive or [...] the special value 0.'
////	'The string may begin with an arbitrary amount of white space 
////	(as determined by isspace(3)) followed by a single optional + 
////	or - sign. If base is zero or 16, the string may then include 
////	a 0x prefix, and the number will be read in base 16; otherwise, 
////	a zero base is taken as 10 (decimal) unless the next character is `0', 
////	in which case it is taken as 8 (octal).'
////	man strtol
////	
////	''
*///	https://en.wikipedia.org/wiki/Index_notation
