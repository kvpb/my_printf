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

#include "../include/math.h"
//#include <stdio.h> //   debug

#undef itrvpow
#undef rcsvpow
//#undef pow
//#undef powl
//#undef powf

int itrvpow( int b, int n )
{
	int x = 1;
	int i = 0;

	if ( n == 0 )
		return 1;
	else if ( n == 1 )
		return n;
	while ( i < n )
	{
		x = x * b;
		i++;
	}
	return x;
} // KVPB's ITRVPOW
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

//double pow( double x, double y ); //double pow(double x, double y);

//long double powl( long double x, long double y ); //long double powl(long double x, long double y);

//float powf( float x, float y ); //float powf(float x, float y);

/*int main()
{
	for ( int b = 0; b < 11; b++ )
	{
		for ( int n = 0; n < 4; n++ )
		{
			printf("b = %d,\t\tn = %d,\t\titrvpow( b, n ) = %d;\n", b, n, itrvpow( b, n ) );
			printf("b = %d,\t\tn = %d,\t\trcsvpow( b, n ) = %d;\n", b, n, rcsvpow( b, n ) );
		}
	}
	printf("\n");
	//printf("%\n", pow(, ));
	//printf("\n");
	return 0;
}*/ //	debug

/*//	pow.c
////	POW
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
