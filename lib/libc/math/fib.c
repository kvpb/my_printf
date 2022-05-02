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

#include "../include/math.h"
#include <math.h>
//#include <stdio.h> //	debug code

//#undef pow //	debug code
//#undef nfib
#undef fib

/*int pow( int b, int n )
{
	int x;

	if ( n == 0 )
		return 1;
	if ( n % 2 == 0 )
	{
		x = pow( b, n / 2 );
		return x * x;
	}
	else
		return b * pow( b, n - 1 );
}*/ // KVPB's RCSVPOW
//	debug code

/*int nfib( int n )
{
	return pow( -1, -( n ) + 1 ) * fib( -( n ) ); //pow( -1, n + 1 ) * fib( n );
}*/ // KVPB's RCSVNFIB
//	debug code

int fib( int n )
{
	if ( n < 0 )
		return pow( -1, -( n ) + 1 ) * fib( -( n ) ); //return nfib( n );
	if ( 0 <= n && n <= 1 ) //else if ( 0 <= n && n <= 1 ) // Else if? Why? It was a one-way trip to a return.
		return n;
	else
		return fib( n - 1 ) + fib( n - 2 );
} // KVPB's RCSVFIB

/*int main()
{
	//int d   = -20;
	//int c   =  -3;
	//int b   =  -2;
	//int a   =  -1;
	//int n_0 =   0;
	//int n_1 =   1;
	//int n_2 =   2;
	//int n_3 =   3;
	//int n_4 =  20;
	int i =  0;
	int j = -0;

	//printf("%d\n", fib( d   ));
	//printf("%d\n", fib( c   ));
	//printf("%d\n", fib( b   ));
	//printf("%d\n", fib( a   ));
	//printf("%d\n", fib( n_0 ));
	//printf("%d\n", fib( n_1 ));
	//printf("%d\n", fib( n_2 ));
	//printf("%d\n", fib( n_3 ));
	//printf("%d\n", fib( n_4 ));
	i = -20;
	while ( -20 <= i && i <= 20 )
	{
		printf("F_%d\t= %d\n", i, fib( i ));
		i++;
	}
	printf("F_-0\t= %d\n", fib( j ));
	return 0;
}*/
//	debug code

/*//	fib.c
		Fibonacci number

		Karl V. P. Bertin `kvpb`
		+1 (DDD) DDD-DDDD
		+33 A BB BB BB BB
		local-part@domain
		https://www.linkedin.com/in/karlbertin
		https://twitter.com/kvpb777
		https://github.com/kvpb
		https://www.instagram.com/add/karlbertin
*///	https://vm.tiktok.com/ZSwAmcFh/
