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

#include <stdarg.h> // va_start, va_arg, va_copy, va_end
#include <math.h> // pow
#include <stdlib.h> // malloc
#include <limits.h> // CHAR_BIT, INT_MIN, INT_MAX //	unused code
#include <unistd.h> // write
#include <stddef.h> // size_t
#include <string.h> // strlen, memcpy, strcat //	unused code
#include <stdio.h> // putc, putchar, puts, printf //	unused, debug code

#undef rcsvpow
#undef strlen
#undef memcpy
//#undef malloc //	unused code
#undef itoa
#undef uitoa
//#undef ntoa_b // unused, useless code
#undef putchr //	useless code
#undef putstr //	useless code
#undef putn //	useless code
#undef putnbr //	useless code
//#undef cnvrtd //	unused, useless code
//#undef cnvrto //	unused, useless code
#undef cnvrtu //	unused, useless code
//#undef cnvrtx //	unused, useless code
//#undef cnvrtc //	unused, useless code
//#undef cnvrts //	unused, useless code
#undef cnvrtp //	useless code
//#undef printf //	unused code
#undef my_printf //	useless code

#define INT_DIGITS 19
#define UINT_DIGITS 20

int rcsvpow( int b, int n )
{
	int x;

	if ( n == 0 )
		return 1;
	if ( n % 2 == 0 )
	{
		x = rcsvpow( b, n / 2 );
		return ( x * x );
	}
	else
		return ( b * rcsvpow( b, n - 1 ) );
} // KVPB's RCSVPOW

size_t strlen(const char* s)
{
	const char* p = s;

	while ( *++p );
	return ( p - s - 1 );
} // KVPB's STRLEN

void* memcpy(void* restrict d, const void* restrict s, size_t n )
{
	while ( n-- )
	{
		*(unsigned char*)d = *(unsigned char*)s;
		d++;
		s++;
	}
	return d;
} // KVPB's MEMCPY

//void* malloc( size_t s ); // KVPB's MALLOC //	unused code

char* itoa( int i )
{
	static char b[ INT_DIGITS + 2 ];
	char* p = b + INT_DIGITS + 1;

	if ( i >= 0 )
	{
		--p;
		*p = '0' + ( i % 10 );
		i = i / 10;
		while ( i != 0 )
		{
			--p;
			*p = '0' + ( i % 10 );
			i = i / 10;
		}
	}
	else
	{
		--p;
		*p = '0' - ( i % 10 );
		i = i / 10;
		while ( i != 0 )
		{
			--p;
			*p = '0' - ( i % 10 );
			i = i / 10;
		}
		--p;
		*p = '-';
	}
	return p;
} // KVPB's ITOA
char* uitoa( unsigned int i )
{
	static char b[ UINT_DIGITS + 1 ];
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
} // KVPB's UITOA

int putchr(char c)
{
	return write(1, &c, 1);
} // KVPB's PUTCHR

int putstr(const char* s)
{
	return write(1, s, strlen(s));
} // KVPB's PUTSTR

int putn( int n, char* b)
{
	int i = 0;
	int l = strlen( b );

	if (  n  <  0 )
	{
		n = -( n );
		i += write(1, "-", 1);
	}
	if (  n  <  l )
		i += write(1, &b[n], 1);
	else
	{
		i += putn( n / l, b );
		i += putn( n % l, b );
	}
	return i;
} // KVPB's PUTN
int uputn( unsigned int n, char* b)
{
	int i = 0;
	unsigned int l = strlen( b );

	if (  n  <  l )
		i += write(1, &b[n], 1);
	else
	{
		i += uputn( n / l, b );
		i += uputn( n % l, b );
	}
	return i;
} // KVPB's UPUTN
int ullputn( unsigned long long n, char* b)
{
	int i = 0;
	unsigned long long l = strlen( b );

	if (  n  <  l )
		i += write(1, &b[n], 1);
	else
	{
		i += ullputn( n / l, b );
		i += ullputn( n % l, b );
	}
	return i;
} // KVPB's ULLPUTN
int putnbr( int n )
{
	return putn( n, "0123456789");
} // KVPB's PUTNBR
int uputnbr( int n )
{
	return uputn( n, "0123456789");
} // KVPB's UPUTNBR
int ullputnbr( int n )
{
	return uputn( n, "0123456789");
} // KVPB's ULLPUTNBR

//const signed int cnvrtd(const int i); // KVPB's CNVRTD //	unused
//const unsigned int cnvrto(const int i); // KVPB's CNVRTO //	unused
unsigned int cnvrtu(const int i) //const unsigned int cnvrtu(const int i)
{
	unsigned int u;
	const int n = sizeof(int) * CHAR_BIT / 8;
	const int M = rcsvpow( 2, n );

	if ( i < 0 )
		u = M - i;
	else
		u = (unsigned int) i;
	return (const unsigned int) u;
} // KVPB's CNVRTU
//const unsigned int cnvrtx(const int i); // KVPB's CNVRTX //	unused
unsigned char cnvrtc(const int i); //const unsigned char cnvrtc(const int i);
//const char* cnvrts(const char* s); // KVPB's CNVRTS //	useless, unused
const char* cnvrtp(void* p)
{
	//void* p = &a;
	size_t l = sizeof(p);
	unsigned char B[l];
	unsigned char H;
	unsigned char L;
	char T[2];
	int i;
	char* s = malloc( l );

	memcpy(B, &p, l );
	strcat(s, "0x");
	i = sizeof(p) - 1;
	while ( i >= 0 )
	{
		H = ( B[i] >> 4 ) & 0xF;
		L =   B[i]        & 0xF;
		T[0] = H;
		T[1] = L;

		if ( H < 10 )
			T[0] = T[0] + '0';
		else
			T[0] = T[0] + 'a' - 10;
		strncat(s, &T[0], 1);
		if ( L < 10 )
			T[1] = T[1] + '0';
		else
			T[1] = T[1] + 'a' - 10;
		strncat(s, &T[1], 1);
		i--;
	}
	return s;
} // KVPB's CNVRTP

//int printf(const char* restrict f, ...); // KVPB's PRINTF //	unused code

/*int my_printf(char* restrict format, ...) //int printf(const char* restrict f, ...);
{
	int i;
	va_list p_a;
	va_list p_a_2;
	//va_start(p_a, b);
	int n; //int d, o, u, x;
	char c;
	char* p;
	//char* p_0;
	//char* p_1;
	char* s;
	//char c, *p, *s;
	//char* b;

	va_start(p_a, format);
	//va_copy(p_2_a, p_a);
	i = 0;
	//   F I R S T   A T T E M P T :   W I T H   S W I T C H   S T A T E M E N T   //
	while (*format++) //while (*format)
	{
		i += write(1, format, 1); //i += write(1, &format, 1);
		switch(*format) //switch(*format++)
		{
			case 'd': // signed int (decimal)
				//printf("decimal %%d\n", i);

					// here I gotta add a big-ass part which gets the first next argument in va_ and deletes it
					n = (intmax_t) va_arg(p_a, signed int);
					i += putnbr( n ); //cnvrtd(
					//format++;
					//format++;

				break;
			case 'o': // unsigned int (octal) // I guess they do not care about signed octal and hexadecimal numbers, because they do not consider negative numbers in these numeral systems. You are supposed to 'loop through the range' anyway, if you represent them in the hex numeral system, so I guess we gotta write only unsigned-int-type numbers in these positional numeral systems.
				//printf("octal %%o\n", i);

					// here I gotta add a big-ass part which gets the first next argument in va_ and deletes it
					n = cnvrtu( va_arg(p_a, unsigned int) );
					//i += putchr('0');
					i += putn( n, "01234567"); //cnvrto(

				break;
			case 'u': // unsigned int (decimal)
				//printf("decimal %%u\n", i);

					// here I gotta add a big-ass part which gets the first next argument in va_ and deletes it
					n = cnvrtu( va_arg(p_a, unsigned int) );
					i += putnbr( n ); //cnvrtu(

				break;
			case 'x': // unsigned int (hexdecimal)
				//printf("hexadecimal %%x\n", i);

					// here I gotta add a big-ass part which gets the first next argument in va_ and deletes it
					n = cnvrtu( va_arg(p_a, unsigned int) );
					//i += putstr("0x");
					i += putn( n, "0123456789abcdef"); //cnvrtx(

				break;
			case 'c': // char
				//printf("char %%c\n", c);

					// here I gotta add a big-ass part which gets the first next argument in va_ and deletes it
					c = va_arg(p_a, char);
					i += putchr(c); //cnvrtc(

				break;
			case 's': // string
				//printf("string %%s\n", s);

					// here I gotta add a big-ass part which gets the first next argument in va_ and deletes it
					s = va_arg(p_a, char*);
					i += putstr(s); //cnvrts(

				break;
			case 'p': // pointer
				//printf("pointer %%p\n", s);

					// here I gotta add a big-ass part which gets the first next argument in va_ and deletes it
					p = va_arg(p_a, void*);
					i += putstr(cnvrtp(p));
					format++;
					format++;

				break;
			//format++;
		} // This code is a mess. I came back to it after half a year. I should start over.
	} // I gotta retry with an if statement and two pointers.
	va_end(p_a);
	// ... //
	//va_end(p_2_a);
	return i;
}*/ // I wanted to make it a wrapper function. I had planned to actually remake the original STDARG, MALLOC et alii core functions with personally home-brewn extra CNVRT and nToa_b ones, appropriately handle passed data (so tokenize, typecast & convert, buffer, concatenate, measure & size and output it just as needed), remake PRINTF from those and wrap it in this one. Here is a copied and pasted part of my original plan: '[1-. do any required preliminary stuff, ]1. measure the main string and all converted strings, 2. allocate enough memory minus the cumulated length of all format specifiers, 3. set a pointer, point to the beginning of the string, set another, incrementally point towards the end of the string, 4. stop at a format specifier, copy that part of the string, everything between both pointers, in a buffer, concatenate the corresponding converted char*-type data to the buffer, 5. pick up after the format specifier, reset the first pointer and the second one there, 6. and rinse, repeat, until you reach the terminator of the string, 7. deallocate all of the memory used[, 7+. return the amount of printed characters]'. And I could have achieved it very well; I in fact can do it even better now. I unfortunately finally broke from that COVID-19 countermeasures fuckery, and I starting depressing the fuck out after two days, until I was gonna make myself die in april '22, but I found out someone had taken away my carbine and ammo, so... Fuck you, Macron, you genetic waste, and fuck each of your voters, you total retards. So here is my submission for My PRINTF. Enjoy the playlist.
int my_printf(char* restrict format, ...)
{
	int i;
	int j;
	va_list p_a;
	//int n;
	//unsigned int N;
	//char c;
	//char* p;
	char* s;
	//va_list p_2_a;

	va_start(p_a, format);
	i = 0;
	j = 0;
	//va_copy(p_2_a, p_a);
	//if (va_arg(p_2_a, void*) == NULL)
	//{
	//	i += putstr("(null)\n");
	//	return i;
	//}
	while (format[j] != '\0')
	{
		if (format[j] == '%')
		{
			if (format[ j + 1 ] == '%') // escapes the percent sign, IIRC.
			{
				i += putchr('%'); //i += write(1, "%", 1);
				j++;
			}
			if (format[ j + 1 ] == 'd') // signed int (decimal)
			{
				//n = (intmax_t) va_arg(p_a, signed int);
				//i += putnbr( n );
				i += putnbr( va_arg(p_a, int) );
				j++;
			}
			if (format[ j + 1 ] == 'o') // unsigned int (octal)
			{
				//n = cnvrtu( va_arg(p_a, unsigned int) );
				//i += putn( n, "01234567");
				i += uputn( va_arg(p_a, unsigned int), "01234567");
				j++;
			}
			if (format[ j + 1 ] == 'u') // unsigned int (decimal)
			{
				//n = cnvrtu( va_arg(p_a, unsigned int) );
				//i += putnbr( n );
				i += uputnbr( va_arg(p_a, unsigned int) );
				j++;
			}
			if (format[ j + 1 ] == 'x') // unsigned int (hexdecimal)
			{
				//n = cnvrtu( va_arg(p_a, unsigned int) );
				//i += putn( n, "0123456789abcdef");
				i += uputn( va_arg(p_a, unsigned int), "0123456789abcdef");
				j++;
			}
			if (format[ j + 1 ] == 'c') // char
			{
				//c = va_arg(p_a, int);
				//i += putchr(c);
				i += putchr(va_arg(p_a, int));
				j++;
			}
			if (format[ j + 1 ] == 's') // string
			{
				//s = va_arg(p_a, char*);
				//i += putstr(s);
				//i += putstr(va_arg(p_a, char*));
				s = va_arg(p_a, char*);
				if (s != NULL)
					i += putstr(s);
				else
					i += putstr("(null)");
				j++;
			}
			if (format[ j + 1 ] == 'p') // pointer
			{
				//p = va_arg(p_a, void*);
				//i += putstr(cnvrtp(p));
				i += putstr("0x");
				i += ullputn( va_arg(p_a, unsigned long long), "0123456789abcdef"); //i += putstr(cnvrtp(va_arg(p_a, void*)));
				j++;
			}
			//if (format[ j + 1 ] == '') 
			//{
			//	
			//}
			j++;
		}
		i += write(1, &format[j], 1);
		j++;
	}
	va_end(p_a);
	return i;
} // What a mess. At least, it works. However, it looks like shit. I picked up my 6-month-old code after all. I hadn't planned to do it this way at all. I had to rush. Sometimes, you've got to do it quick 'n' dirty.

int main() //( int c_a, char* v_a[] )
{
			 char* a = "";
	  signed  int  d = -2147483647; //-2147483648; //=  INT_MIN;
	unsigned  int  o =  4294967295; //= UINT_MAX; //=  INT_MAX * 2 - 1;
	unsigned  int  u =  4294967295; //=  INT_MAX * 2 - 1;
	unsigned  int  x =  4294967295; //=  INT_MAX * 2 - 1;
			 char  c = 'c';
			 char* s = "string";
	//char* a = v_a[0];
			 void* p = &a; //void* p = (void*) &main(); //&v_a[0]; //&a;

	printf("%d\n",	printf("   PRINTF:\td:\t%d\n", d));
	printf("%d\n", my_printf("My PRINTF:\td:\t%d\n", d));
	printf("%d\n",	printf("   PRINTF:\to:\t%o\n", o));
	printf("%d\n", my_printf("My PRINTF:\to:\t%o\n", o));
	printf("%d\n",	printf("   PRINTF:\tu:\t%u\n", u));
	printf("%d\n", my_printf("My PRINTF:\tu:\t%u\n", u));
	printf("%d\n",	printf("   PRINTF:\tx:\t%x\n", x));
	printf("%d\n", my_printf("My PRINTF:\tx:\t%x\n", x));
	printf("%d\n",	printf("   PRINTF:\tc:\t%c\n", c));
	printf("%d\n", my_printf("My PRINTF:\tc:\t%c\n", c));
	printf("%d\n",	printf("   PRINTF:\ts:\t%s\n", s));
	printf("%d\n", my_printf("My PRINTF:\ts:\t%s\n", s));
	printf("%d\n",	printf("   PRINTF:\tp:\t%p\n", p));
	printf("%d\n", my_printf("My PRINTF:\tp:\t%p\n", p));
	printf("%d\n",	printf("%s\n", (char*) NULL));
	printf("%d\n", my_printf("%s\n", (char*) NULL));
	return 0;
} //	debug code

/*//	my_printf.c
////	My PRINTF
////
////	Karl V. P. Bertin `kvpb`
////	+1 (DDD) DDD-DDDD
////	+33 A BB BB BB BB
////	local-part@domain
////	bertin_k@qwasar.io
////	https://www.linkedin.com/in/karlbertin
////	https://github.com/kvpb
////	https://upskill.us.qwasar.io/users/bertin_k
////
*///	The PRINTF utility formats and prints its arguments, after the first, under control of the format.
