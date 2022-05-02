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

#include <stdlib.h>
#include <string.h>
//#include <stdio.h> //	debug code

#undef printf

/*const char* cnvrtp(void* p)
{
	//void* p = &a; //*ptr = &adr //*pointer = &address
	size_t l = sizeof(p); //len //length
	unsigned char B[l]; //buf //buffer
	unsigned char H; //hi //high
	unsigned char L; //lo //low
	char T[2]; //tmp[2] //temporary[2]
	int i;
	char* s = malloc( l );

	memcpy(B, &p, l ); // Copy l (an amount of the size of the pointer of) bytes from &p (the address of the pointer) to B (the buffer). (So just copy all bytes from the pointer to the buffer.)
	strcat(s, "0x");
	i = sizeof(p) - 1; // Start from the end of the string before null-termination.
	while ( i >= 0 )
	{
		H = ( B[i] >> 4 ) & 0xF; //hi //high // Bit-wise right-shift each bit in the operand B[i] by 4 places, and perform logically conjoin (bit-wise and [cockney verb], apply bitwise and to) the bits in each position of the number _in_its_binary_form_ ( 0xF = 0b1111 ). E.g. 0x80000000 [ = 0b10000000000000000000000000000000 [with thirty-one zeros] = 2147483648 = 2**31 ] >> 31 = 1 [ = 2^0 = 0b1 [ = 0b00000000000000000000000000000001 ] = 0x1 ]. E.g. 0b10000000 >> 4 = 0b00001000. E.g. 2**31 [ = 0b10000000000000000000000000000000 ] & 0xF [ = 0b0000000000000000000000000001111 ] = "1 but 0 so 0, 0 and 0 so 0 26 times in a row, 0 but 1 so 0 4 times in a row", 2**( log( 65535 ) / log( 2 ) ) [ = 0b10000000000000000 ] & 0x15555 [ = 0b10101010101010101 ] = 0b10000000000000000. So you get to know      how many of the four last bits[?]     
		L =   B[i]        & 0xF; //lo //low // Logically conjoin the bits in each position of the number in its binary form ( 0xF = 0b1111 ). So you get to know 
		T[2] = {H, L}; //tmp[2] = {hi, lo} //temporary[2] = {high, low}

		if ( H < 10 )
			T[0] = T[0] + '0'; // '+ 48'? If the high part is less than 10, start at least at character 48, zero?
		else
			T[0] = T[0] + 'a' - 10; // '+ 97'? If the high part is greater than 10, start at least 10 characters before character 97, lowercase A, at character 87, uppercase W? Why? Does it make it loop back to 0? // Wait. I was using the hexadecimal numeral system. I must get values between 0 and 15 and represent with the 6 first letters of the latin alphabet those in two digits in the decimal numeral system. I am getting it. But why + 97 - 10, or rather why + 97 - 10, ONLY IF H > 10? BECAUSE 10 IS LOWERCASE A! Lemme check this out. Suppose we have H = 10. 10 + 97 - 10 = 97 = 'a'. Now suppose we have H = 15. 15 + 97 - 10 = 97 + 5 = 102 = 'f'. There you go. This confused me, since we are somehow juggling with numeric values for math and ASCII character values. This dovetails perfectly with the previous conditional block, as if you represent a numerical, 'mathematical' number in base 10, you gotta start at character 48, '0', on the ASCII table. And I did not even modify the < 10, when I checked that; I did it all in my head.
		strncat(s, &T[0], 1); //strcat(s, T[0]);
		if ( L < 10 )
			T[1] = T[1] + '0';
		else
			T[1] = T[1] + 'a' - 10;
		strncat(s, &T[1], 1); //strcat(s, T[1]);
		i--;
	}
	return s;
}*/

int printf(char* )
{

}

/*int main()
{
	

	   printf("", );
	my_printf("", );
	return 0;
}*/
//	debug code

/*//	printf.c
////	PRINTF
////
////	Karl V. P. Bertin `kvpb`
////	+1 (DDD) DDD-DDDD
////	+33 A BB BB BB BB
////    local-part@domain
////	bertin_k@qwasar.io
////	https://www.linkedin.com/in/karlbertin
////	https://github.com/kvpb
////	https://upskill.us.qwasar.io/users/bertin_k
////
*///	The PRINTF utility formats and prints its arguments, after the first, under control of the format.
