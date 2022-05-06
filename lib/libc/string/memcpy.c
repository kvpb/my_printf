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

//#include "../include/string.h"
#include <stddef.h> // size_t
#include <string.h> // memcpy //	debug code
/*#include <stdlib.h> // malloc //	debug code
#include <stdio.h>*/ // printf //	debug code

#undef memcpy // Why do I never think about that? LMAO.

void* memcpy(void* restrict d, const void* restrict s, size_t n ) //void *memcpy(void *restrict dest, const void *restrict src, size_t n); //void *memcpy (void *dstpp, const void *srcpp, size_t len); //char *memcpy (char *destaddr, const char *srcaddr, int len);
{
	//size_t i = 0; // Lemme do this the pointer arithmetics way.

	while ( n-- ) //while ( 0 < n ) // If n == 0, ( n-- ) should automatically evaluate to FALSE.
	{
		*(unsigned char*)d = *(unsigned char*)s; // Properly typecast everything, and assign the value currently pointed to by s to the one currently pointed to by d. I tinkered around, until I found out the correct syntax, so I doubt I understood it correctly.
		d++; // Then increment pointer d.
		s++; // Then increment pointer s.
		//n--; //i++;
	}
	return d;
}

/*int main()
{
	char* d_0;
	const unsigned char* s_0 = "0123456789";
	char* d_1 = malloc( 32 );
	const unsigned char* s_1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char* d_2 = malloc( 32 );
	const unsigned char* s_2 = "abcdefghijklmnopqrstuvwxyz";
	char* d_3 = malloc( 48 );
	const unsigned char* s_3 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char* d_4 = malloc( 48 );
	const unsigned char* s_4 = "0123456789abcdefghijklmnopqrstuvwxyz";
	char* d_5 = malloc( 64 );
	const unsigned char* s_5 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char* d_6 = malloc( 64 );
	const unsigned char* s_6 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	printf("d_0:\t%s\n", (unsigned char*) memcpy(d_0, s_0, 1));
	printf("d_1:\t%s\n", (unsigned char*) memcpy(d_1, s_1, 2));
	printf("d_2:\t%s\n", (unsigned char*) memcpy(d_2, s_2, 4));
	printf("d_3:\t%s\n", (unsigned char*) memcpy(d_3, s_3, 8));
	printf("d_4:\t%s\n", (unsigned char*) memcpy(d_4, s_4, 16));
	printf("d_5:\t%s\n", (unsigned char*) memcpy(d_5, s_5, 32));
	printf("d_6:\t%s\n", (unsigned char*) memcpy(d_6, s_6, 64));
	return 0;
}*/ //	debug code

/*//	memcpy.c
////	MEMCPY
////
////	Karl V. P. Bertin `kvpb`
////	+1 (DDD) DDD-DDDD
////	+33 A BB BB BB BB
////	local-part@domain
////	https://www.linkedin.com/in/karlbertin
////	https://twitter.com/kvpb777
////	https://github.com/kvpb
////	https://www.instagram.com/add/karlbertin
*///	https://vm.tiktok.com/ZSwAmcFh/