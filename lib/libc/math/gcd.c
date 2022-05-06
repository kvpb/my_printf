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

//#include "../include/math.h"
#include <stdarg.h>
#include <stdio.h> //	debug code

#undef itrvgcd
#undef rcsvgcd
#undef gcd

int itrvgcd( int a, int b )
{
	int q;
	int r;
	// a = bq + r

	while ( b > 0 )
	{
		q = a / b;
		r = a - q * b; //a % b;
		a = b;
		b = r;
	}
	return a;
} // KVPB's ITRVGCD

int rcsvgcd( int a, int b )
{
	return ( ( b == 0 ) ? a : rcsvgcd( b, a % b ) );
} // KVPB's RCSVGCD

/*int gcd( int a, int b, ... ) //int gcd( int a, int b )
{
	va_list A_p;

	printf("a = %d\tb = %d\tA_p = %p\n", a, b, A_p); //	debug code
	va_start(A_p, b);
	//va_arg(A_p, int);
	//return ( ( b == 0 ) ? a : gcd( va_arg(A_p, int), a % b ) ); //return ( ( b == 0 ) ? a : gcd( b, a % b ) );
	va_end(A_p);
}*/ // KVPB's RCSVGCD

int gcd( int a, int b, ... )
{
	va_list A_p;

	va_start(A_p, b);
	return rcsvgcd( rcsvgcd( a, b ), va_arg(A_p, int) );
	va_end(A_p);
} // KVPB's GCD

int main()
{
	int a_0 = 0;
	int b_0 = 0;
	int a_1 = 1;
	int b_1 = 10;
	int a_2 = 2;
	int b_2 = 22;
	int a_3 = 34;
	int b_3 = 43;
	int a_4 = 45;
	int b_4 = 54;
	int a_5 = 50;
	int b_5 = 95;
	int a_6 = 48;
	int b_6 = 72;
	int a_7 = 42;
	int b_7 = 777;
	int a = 3840;
	int b = 2880;
	int c = 5120;
	int d = 2880;
	int f = gcd( a, b );
	int g = gcd( c, d );
	int h = gcd( f, g );
	int y = gcd( a, b, c, d, f, g, h );

	printf("a = %d,\t\tb = %d,\t\tgcd( a, b ) = %d;\n", a_0, b_0, rcsvgcd( a_0, b_0 ));
	printf("a = %d,\t\tb = %d,\t\tgcd( a, b ) = %d;\n", a_1, b_1, rcsvgcd( a_1, b_1 ));
	printf("a = %d,\t\tb = %d,\t\tgcd( a, b ) = %d;\n", a_2, b_2, rcsvgcd( a_2, b_2 ));
	printf("a = %d,\t\tb = %d,\t\tgcd( a, b ) = %d;\n", a_3, b_3, rcsvgcd( a_3, b_3 ));
	printf("a = %d,\t\tb = %d,\t\tgcd( a, b ) = %d;\n", a_4, b_4, rcsvgcd( a_4, b_4 ));
	printf("a = %d,\t\tb = %d,\t\tgcd( a, b ) = %d;\n", a_5, b_5, rcsvgcd( a_5, b_5 ));
	printf("a = %d,\t\tb = %d,\t\tgcd( a, b ) = %d;\n", a_6, b_6, rcsvgcd( a_6, b_6 ));
	printf("a = %d,\t\tb = %d,\tgcd( a, b ) = %d;\n", a_7, b_7, rcsvgcd( a_7, b_7 ));
	printf("gcd( 4, 40, 404 )\t\t= %d;\n", gcd( 4, 40, 404 ));
	printf("gcd( 7, 42, 777, 7042 )\t\t= %d;\n", gcd( 7, 42, 777, 7042 ));
	printf("gcd( 6, 48, 192, 256, 2048 )\t= %d;\n", gcd( 6, 48, 192, 256, 2048 ));
	printf("a = %d,\tb = %d,\tgcd( a, b ) = %d;\n", a, b, itrvgcd( a, b ));
	printf("c = %d,\td = %d,\tgcd( c, d ) = %d;\n", c, d, itrvgcd( c, d ));
	printf("a = %d,\t\tb = %d,\t\tf( a, b ) = %d,\na / f( a, b ) = %d,\tb / f( a, b ) = %d,\na / b = %d / %d;\n", a, b, f, ( a / f ), ( b / f ), a / f, b / f);
	printf("c = %d,\t\td = %d,\t\tf( c, d ) = %d,\nc / f( c, d ) = %d,\td / f( c, d ) = %d,\nc / d = %d / %d;\n", c, d, g, ( c / g ), ( d / g ), c / g, d / g);
	printf("a = %d,\tb = %d,\tc = %d,\td = %d,\nf( a, b ) = %d,\t\tg( c, d ) = %d,\nh( f( a, b ), g( c, d ) ) = %d,\ny( a, b, c, d, f( a, b ), g( c, d ), h( f( a, b ), g( c, d ) ) ) = %d;\n", a, b, c, d, f, g, h, y);
	printf("with 2 parameters:\t%d\n", gcd( 900, 600 ));
	printf("with 3 parameters:\t%d\n", gcd( 900, 600, 90 ));
	printf("with 4 parameters:\t%d\n", gcd( 900, 600, 90, 60 ));
	printf("with 5 parameters:\t%d\n", gcd( 900, 600, 90, 60, 9 ));
	printf("with 6 parameters:\t%d\n", gcd( 900, 600, 90, 60, 9, 6 ));
	return 0;
} //	debug code

/*//	gcd.c
////	GCD
////
////	Karl V. P. Bertin `kvpb`
////	+1 (DDD) DDD-DDDD
////	+33 A BB BB BB BB
////	local-part@domain
////	https://www.linkedin.com/in/karlbertin
////	https://twitter.com/kvpb777
////	https://github.com/kvpb
////	https://www.instagram.com/add/karlbertin
////	https://vm.tiktok.com/ZSwAmcFh/
////
////	https://en.wikipedia.org/wiki/Greatest_common_divisor
////	https://en.wikipedia.org/wiki/Euclidean_algorithm
////	https://en.wikipedia.org/wiki/Euclidean_division
////	https://en.wikipedia.org/wiki/Least_common_multiple
*///	https://en.wikipedia.org/wiki/Variadic_function#In_C
