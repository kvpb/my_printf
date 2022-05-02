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
#include <string.h>
#include <stddef.h>
/*#include <stdlib.h> //	debug code
#include <stdio.h>*/ //	debug code

#undef strcpy

char* strcpy(char* restrict d, const char* restrict s) //char *strcpy (char *dest, const char *src); //char *strcpy(char * restrict dst, const char * restrict src); // STRCAT, STRCPY and the like take a destination first and sources second, because they may need to support a variable number of arguments. Try to compile with the standard names, and look at the warnings, if you do not believe me. The STRCPY from Darwin seems to be a variadic function-like macro: `#define strcpy(dest,__VA_ARGS__,...)`.
{
	const size_t l = strlen(s);

	memcpy(d, s, l + 1 );
	//while (s[i] != '\0')
	//{
	//	s_2[i] = s[i];
	//	i++;
	//}
	//s_2[i] = '\0';
	return d;
}

/*int main()
{
	char* d_0;
	const char* s_0 = "0123456789";
	char* d_1 = malloc( 32 );
	const char* s_1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char* d_2 = malloc( 32 );
	const char* s_2 = "abcdefghijklmnopqrstuvwxyz";
	char* d_3 = malloc( 48 );
	const char* s_3 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char* d_4 = malloc( 48 );
	const char* s_4 = "0123456789abcdefghijklmnopqrstuvwxyz";
	char* d_5 = malloc( 64 );
	const char* s_5 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char* d_6 = malloc( 64 );
	const char* s_6 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	printf("d_0:\t%s\n", strcpy(d_0, s_0)); //printf("d_0:\t%s\n", kkstrcpy(d_0, s_0));
	printf("d_1:\t%s\n", strcpy(d_1, s_1));
	printf("d_2:\t%s\n", strcpy(d_2, s_2));
	printf("d_3:\t%s\n", strcpy(d_3, s_3));
	printf("d_4:\t%s\n", strcpy(d_4, s_4));
	printf("d_5:\t%s\n", strcpy(d_5, s_5));
	printf("d_6:\t%s\n", strcpy(d_6, s_6));
	return 0;
}*/ //	debug code

/*//	strcpy.c
////	STRCPY
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