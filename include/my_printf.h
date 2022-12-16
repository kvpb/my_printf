/*//	Copyright 2021 Karl Vincent Pierre Bertin
////
////	Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:
////
////	1.	Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
////
////	2.	Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.
////
////	3.	Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.
////
*///	THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef MY_PRINTF_H
# define MY_PRINTF_H

# include "../lib/libc/include/libc.h"
# include <stdarg.h> // va_start, va_arg, va_copy, va_end
//# include <stddef.h> // size_t //	unused code
//# include <string.h> // strlen, memcpy, strcat //	unused code
//# include <limits.h> // CHAR_BIT, INT_MIN, INT_MAX //	unused code
//# include <math.h> // pow //	unused code
//# include <stdlib.h> // malloc //	unused code
//# include <unistd.h> // write // unused code
//# include <stdio.h> // putc, putchar, puts, printf //	unused, debug code
//# include <unistd.h> // write //	unused code
//# include <stdlib.h> // malloc, free //	unused code

//signed int cnvrtd( int i );
//unsigned int cnvrto( int i );
//unsigned int cnvrtu( int i );
//unsigned int cnvrtx( int i );
//unsigned char cnvrtc(int i);
//char* cnvrts(char* s);
//char* cnvrtp( void* p );
//int printf(const char* restrict f, ... );
int my_printf(char * restrict format, ... );

#endif

/*//	my_printf.h
////	My PRINTF
////
////	Karl Bertin `bertin_k`
////	bertin_k@qwasar.io
*///	https://upskill.us.qwasar.io/users/bertin_k