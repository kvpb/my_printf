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

#include "../include/stdio.h"
#include <stddef.h> // size_t
#include <string.h> // strlen //	unused
#include <unistd.h> // write
//#include <stdio.h> // putc, putchar, puts, printf //	unused //	debug

//#undef strlen
//#undef putn //	debug
//#undef uputn //	debug
//#undef ullputn //	debug
#undef putnbr
#undef uputnbr
#undef ullputnbr

/*size_t strlen(const char* s)
{
	const char* p = s;

	while ( *++p );
	return ( p - s );
}*/ // KVPB's STRLEN

/*int putn( int n, char* b)
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
}*/ // KVPB's PUTN
/*int uputn( unsigned int n, char* b)
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
}*/ // KVPB's UPUTN
/*int ullputn( unsigned long long n, char* b)
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
}*/ // KVPB's ULLPUTN

int putnbr( int n )
{
	return putn( n, "0123456789");
} // KVPB's PUTNBR
/*int putnbr( int n )
{
	int i = 0;

	if (  n  <  0 )
	{
		i += write(1, "-", 1); //putchar('-');
		n = -( n );
	}
	if ( 10 <=  n )
	{
		i += putnbr( n / 10 );
		i += putchar( n % 10 + '0');
	}
	if (  n  < 10 )
		i += putchar( n % 10 + '0');
	return i;
}*/ // KVPB's PUTNBR

int uputnbr( unsigned int n )
{
	return uputn( n, "0123456789");
} // KVPB's UPUTNBR

int ullputnbr( unsigned long long n )
{
	return ullputn( n, "0123456789");
} // KVPB's ULLPUTNBR

/*int main()
{
	int a = -10;
	int b = 0;
	int c = 1;
	int d = 10;
	int m = 100;
	int n = 1000;
	int x = -2147483647; //-2147483648;
	int y = 2147483647;

	printf("\n%i\n", putnbr( a )); //putnbr( a ); putchar('\n');
	printf("\n%i\n", putnbr( b )); //putnbr( b ); putchar('\n');
	printf("\n%i\n", putnbr( c )); //putnbr( c ); putchar('\n');
	printf("\n%i\n", putnbr( d )); //putnbr( d ); putchar('\n');
	printf("\n%i\n", putnbr( m ));
	printf("\n%i\n", putnbr( n ));
	printf("\n%i\n", putnbr( x ));
	printf("\n%i\n", putnbr( y ));
	return 0;
}*/ //	debug

/*//	putnbr.c
////	PUTNBR
////
////	Karl V. P. Bertin `kvpb`
////	+1 (DDD) DDD-DDDD
////	+33 A BB BB BB BB
////	local-part@domain
////	https://www.linkedin.com/in/karlbertin
////	https://twitter.com/kvpbx
////	https://github.com/kvpb
////	https://www.instagram.com/add/karlbertin
*///	https://vm.tiktok.com/ZSwAmcFh/
