/*//  Copyright 2014-2021 Karl V. P. Bertin
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

#include "../include/string.h"
#include <stddef.h>
//#include <stdio.h> // 	debug code

//#ifdef // Does this really serve any purpose?
#  undef strlen
//#endif // If STRLEN is not already defined, I guess it may just do nothing.

/*size_t strlen(const char* s)
{
	size_t i = 0;

	while ( s[i] != 0 )
		i++;
	return i;
}*/
size_t strlen(const char* s) // If I correctly understand pointer arithmetic,
{                            //   p +- n = p +- n * sizeof(typeof(p)),
	const char* p = s;       //   or p +- n = p +- n * sizeof(*p)
                             // So here is a PA version of STRLEN? p sort of
	while ( *p++ );          // goes over the span of s, and once it hits NUL,
	return ( p - s - 1 );    // it stops, and it returns the amount of space
}                            // between both pointers? I do not like it. YMMV.

/*int main()
{
	char* s_0 = "Bryan Patrick Michel Frimin `gearnode`, rends l'argent, sale pervers. top kek";
	char* s_1 = "abc";
	char* s_2 = "RaInB0w d4Sh!";
	char* s_3 = "ThE C4k3 Is a L|3";

	printf("%d\n", strlen(s_0));
	printf("%d\n", strlen(s_1));
	printf("%d\n", strlen(s_2));
	printf("%d\n", strlen(s_3));
	return 0;
}*/
// 	debug code

/*//	strlen.c
////	STRLEN
////	
////	Karl V. P. Bertin `kvpb`
////	+1 (DDD) DDD-DDDD
////	local-part@domain
////	https://www.linkedin.com/in/karlbertin
////	https://github.com/kvpb
////	https://www.instagram.com/add/karlbertin
////	https://vm.tiktok.com/ZSwAmcFh/
////
*///	The STRLEN function computes the length of the string s.
