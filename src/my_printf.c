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

#include "../include/my_printf.h"
//#include <stdarg.h> // va_start, va_arg, va_copy, va_end //	debug code
//#include <math.h> // pow // unused code
//#include <stdlib.h> // malloc //	unused code
//#include <limits.h> // CHAR_BIT, INT_MIN, INT_MAX //	unused code
//#include <unistd.h> // write //	unused code
//#include <stddef.h> // size_t //	unused code
//#include <string.h> // strlen, memcpy, strcat //	unused code
//#include <stdio.h> // putc, putchar, puts, printf //	unused, debug code

#undef my_printf //	useless code

int my_printf(char* restrict format, ... )
{
	int i;
	int j;
	va_list p_a;
	char* s;

	va_start( p_a, format);
	i = 0;
	j = 0;
	while (format[ j ] != '\0')
	{
		if (format[ j ] == '%')
		{
			if (format[ j + 1 ] == '%') // escapes the percent sign, IIRC.
			{
				i += putchr('%');
				j++;
			}
			if (format[ j + 1 ] == 'd') // signed int (decimal)
			{
				i += putnbr( va_arg( p_a, int ) );
				j++;
			}
			if (format[ j + 1 ] == 'o') // unsigned int (octal)
			{
				i += uputn( va_arg( p_a, unsigned int ), "01234567");
				j++;
			}
			if (format[ j + 1 ] == 'u') // unsigned int (decimal)
			{
				i += uputnbr( va_arg( p_a, unsigned int ) );
				j++;
			}
			if (format[ j + 1 ] == 'x') // unsigned int (hexdecimal)
			{
				i += uputn( va_arg( p_a, unsigned int ), "0123456789abcdef");
				j++;
			}
			if (format[ j + 1 ] == 'c') // char
			{
				i += putchr(va_arg( p_a, int ));
				j++;
			}
			if (format[ j + 1 ] == 's') // string
			{
				s = va_arg( p_a, char* );
				if (s != NULL )
					i += putstr(s);
				else
					i += putstr("(null)");
				j++;
			}
			if (format[ j + 1 ] == 'p') // pointer
			{
				i += putstr("0x");
				i += ullputn( va_arg( p_a, unsigned long long ), "0123456789abcdef");
				j++;
			}
			j++;
		}
		i += write(1, &format[ j ], 1);
		j++;
	}
	va_end( p_a );
	return i;
} // What a mess. At least, it works. However, it looks like shit. I picked up my 6-month-old code after all. I hadn't planned to do it this way at all. I had to rush. Sometimes, you've got to deliver quick 'n' dirty.

/*int main()
{
	         char* a = "";
	  signed  int  d = -2147483647;
	unsigned  int  o =  4294967295;
	unsigned  int  u =  4294967295;
	unsigned  int  x =  4294967295;
	         char  c = 'c';
	         char* s = "string";
	         void* p = &a;

	printf("%d\n",    printf("   PRINTF:\td:\t%d\n", d));
	printf("%d\n", my_printf("My PRINTF:\td:\t%d\n", d));
	printf("%d\n",    printf("   PRINTF:\to:\t%o\n", o));
	printf("%d\n", my_printf("My PRINTF:\to:\t%o\n", o));
	printf("%d\n",    printf("   PRINTF:\tu:\t%u\n", u));
	printf("%d\n", my_printf("My PRINTF:\tu:\t%u\n", u));
	printf("%d\n",    printf("   PRINTF:\tx:\t%x\n", x));
	printf("%d\n", my_printf("My PRINTF:\tx:\t%x\n", x));
	printf("%d\n",    printf("   PRINTF:\tc:\t%c\n", c));
	printf("%d\n", my_printf("My PRINTF:\tc:\t%c\n", c));
	printf("%d\n",    printf("   PRINTF:\ts:\t%s\n", s));
	printf("%d\n", my_printf("My PRINTF:\ts:\t%s\n", s));
	printf("%d\n",    printf("   PRINTF:\tp:\t%p\n", p));
	printf("%d\n", my_printf("My PRINTF:\tp:\t%p\n", p));

	return 0;
}*/ //	debug code

/*//	my_printf.c
////	My PRINTF
////
////	Karl V. P. B. `kvpb` AKA Karl Thomas George West `kvpb`
////	+1 (DDD) DDD-DDDD
////	+33 A BB BB BB BB
////	local-part@domain
////	bertin_k@qwasar.io
////	https://www.linkedin.com/in/karlbertin
////	https://github.com/kvpb
*///	https://upskill.us.qwasar.io/users/bertin_k
