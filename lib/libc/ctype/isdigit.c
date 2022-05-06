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

//#include "../include/ctype.h"
//#include <stdio.h> //	debug code

#undef isdigit

int isdigit(int c)
{
	return ( ( 48 <= c && c <= 57 ) ? 1 : 0 ); //return ( ( isalnum(c) && !isalpha(c) ) ? 1 : 0 );
}

/*int main()
{
	char c_48 = '0';
	char c_65 = 'A';
	char c_97 = 'a';

	printf("0\t%d\n", isdigit((int) c_48));
	printf("A\t%d\n", isdigit((int) c_65));
	printf("a\t%d\n", isdigit((int) c_97));
	return 0;
}*/ //	debug code

/*//	isdigit.c
		IsDigit

		Karl V. P. Bertin `kvpb`
		+1 (DDD) DDD-DDDD
		+33 A BB BB BB BB
		local-part@domain
		https://www.linkedin.com/in/karlbertin
		https://twitter.com/kvpb777
		https://github.com/kvpb
		https://www.instagram.com/add/karlbertin
		https://vm.tiktok.com/ZSwAmcFh/

*///	The IsDigit function tests for a decimal digit character. This only includes the characters 0, 1, 2, 3, 4, 5, 6, 7, 8 and 9 regardless of locale.
