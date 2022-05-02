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

#ifndef STDIO_H
# define STDIO_H

# include "libc.h"
# include "string.h"
//# include <unistd.h> // write

int putchar(int c);
int putchr(char c);
int putstr(const char* s);
int putn( int n, char* b);
int uputn( unsigned int n, char* b);
int ullputn( unsigned long long n, char* b);
int putnbr( int n );
int uputnbr( unsigned int n );
int ullputnbr( unsigned long long n );

#endif

/*//	stdio.h
////	STDIO
////
////	Karl V. P. Bertin `kvpb`
////	+1 (DDD) DDD-DDDD
////	+33 A BB BB BB BB
////    local-part@domain
////	bertin_k@qwasar.io
////	https://www.linkedin.com/in/karlbertin
////	https://github.com/kvpb
////	https://upskill.us.qwasar.io/users/bertin_k
////
////	what a change come over me
////	you showed me what life could be
////	it's not grime like it used to be
////	mh look what you've done to me
////	
////	oh I'm giving up for love
////	giving up the way that it used to be
////	I'm giving for love
////	love makes it easy for me
////	
////	how can I go on each day
////	you took a part of me away
////	hand in hand we walk together
////	looks like you're in for stormy weather
////	
////	oh I'm giving up for love
////	giving up the way that it used to be
////	I'm giving for love
////	love makes it easy for me
////	
////	look what you've done to me
////	ain't like it used to be
////	all of my yesterdays are over, over
////	my life has just begun
////	you turn my world around
////	all of my yesterdays are over
////	
////	oh I'm giving up, giving it up for love
////	giving up the way that it used to be
////	I'm givin', giving up, giving it up for love
////	love makes it easy for me
////	
////	wish right now that I was free
////	let's love your offers not kept from me
////	loving you turned my head around
////	this love'll fan until ground above
////	
////	oh I'm giving up for love
////	giving up the way that it used to be
////	I'm giving for love
////	love makes it easy for me
////	
////	giving up for love
////	giving up the way that it used to be
////	I'm givin' for love
////	love makes it easy for me
////	
////	giving up for love
////	ooh ooh giving up for love
*///	giving up for love
