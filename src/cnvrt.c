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

////	The authors of C reserved leading double underscores (__) for the compiler and standard library. https://en.wikipedia.org/wiki/Naming_convention_(programming)#C_and_C++ Yes, this is my version of the C standard library. No, I should not use it. What if I want to make it a true standard library? I have to use my own prefix. But if must not conflict with conventional prefixes. So I will use kk. And so I can find and replace that leading sequence.

/*	'doux  The int (or appropriate variant) argument is converted to signed decimal (d), unsigned octal (o), unsigned decimal (u), unsigned hexadecimal (x).'
	'c  The int argument is converted to an unsigned char, and the resulting character is written.'
	's  The char* argument is expected to be a pointer to an array of character type (pointer to a string). Characters from the array are written up to (but not including) a terminating NUL character.'
	'p  The void* pointer argument is printed in hexadecimal.'*/

#include <stdlib.h> // STRTOL, ATOI
#include <string.h> // 
#include <math.h> // POW
#include <limits.h> // CHAR_BIT
#include <stdint.h> // intmax_t, uintmax_t
#include <stdio.h> //	debug code

const signed int cnvrtd(const int i)
{
	const signed int d;

	d = (const signed int) i;
	return d;
}

const unsigned int cnvrto(const int i)
{
	const unsigned int o;

	o = (unsigned int) i; //o = itoa((unsigned int) i );
	return o;
}

const unsigned int cnvrtu(const int i) //const unsigned int cnvrtD(const int i)
{
	unsigned int u;
	const int n = sizeof(int) * CHAR_BIT / 8; // SizeOf returns a number of bytes, most likely octets, not a number of bits. CHAR_BIT is the number of bits of a single byte.
	const int M = pow( 2, n ); //u = pow( 2, sizeof(int) ) - i; // Compilers set the size of the integer data type to that of a processor register.
	const unsigned int u; //const unsigned int D;

	if ( i < 0 )
		u = M - i;
	else
		u = (unsigned int) i; // i is greater than or equal to 0 (positive). I should be able to safely typecast it like this.
	return (const unsigned int) u;
} // Then pass it to ITOA, and then pass it to PUTS or PUTC in a while loop.

const unsigned int cnvrtx(const int i)
{
	const unsigned int x; //const unsigned int Oxn;

	
	return x;
}

const unsigned char cnvrtc(const int i)
{
	unsigned char c;

	c = (unsigned char) i;
	return c;
}

//const char* cnvrts(const char* s); // useless.

const char* cnvrtp(void* p)
{
	//void* p = &a; //*ptr = &adr //*pointer = &address
	size_t l = sizeof(p); //len //length
	unsigned char B[l]; //buf //buffer
	unsigned char H; //hi //high
	unsigned char L; //lo //low
	char T[2]; //tmp[2] //temporary[2]
	int i;
	char* s = malloc( l );

	memcpy(B, &p, l ); // Copy l (an amount of the size of the pointer of) bytes from &p (the address of the pointer) to B (the buffer). (So just copy all bytes from the pointer to the buffer.)
	strcat(s, "0x"); // Prepend the leading 0x prefix.
	i = sizeof(p) - 1; // Start from the end of the string before null-termination.
	while ( i >= 0 )
	{
		H = ( B[i] >> 4 ) & 0xF; //hi //high // Bit-wise right-shift each bit in the operand B[i] by 4 places, and perform logically conjoin (bit-wise and [cockney verb], apply bitwise and to) the bits in each position of the number _in_its_binary_form_ ( 0xF = 0b1111 ). E.g. 0x80000000 [ = 0b10000000000000000000000000000000 [with thirty-one zeros] = 2147483648 = 2**31 ] >> 31 = 1 [ = 2^0 = 0b1 [ = 0b00000000000000000000000000000001 ] = 0x1 ]. E.g. 0b10000000 >> 4 = 0b00001000. E.g. 2**31 [ = 0b10000000000000000000000000000000 ] & 0xF [ = 0b0000000000000000000000000001111 ] = "1 but 0 so 0, 0 and 0 so 0 26 times in a row, 0 but 1 so 0 4 times in a row", 2**( log( 65535 ) / log( 2 ) ) [ = 0b10000000000000000 ] & 0x15555 [ = 0b10101010101010101 ] = 0b10000000000000000. So you get to know      how many of the four last bits[?]     
		L =   B[i]        & 0xF; //lo //low // Logically conjoin the bits in each position of the number in its binary form ( 0xF = 0b1111 ). So you get to know 
		T[0] = H;
		T[1] = L;
		//T[2] = { H, L }; //tmp[2] = {hi, lo} //temporary[2] = {high, low}

		if ( H < 10 )
			T[0] = T[0] + '0'; // '+ 48'? If the high part is less than 10, start at least at character 48, zero?
		else
			T[0] = T[0] + 'a' - 10; // '+ 97'? If the high part is greater than 10, start at least 10 characters before character 97, lowercase A, at character 87, uppercase W? Why? Does it make it loop back to 0? // Wait. I was using the hexadecimal numeral system. I must get values between 0 and 15 and represent with the 6 first letters of the latin alphabet those in two digits in the decimal numeral system. I am getting it. But why + 97 - 10, or rather why + 97 - 10, ONLY IF H > 10? BECAUSE 10 IS LOWERCASE A! Lemme check this out. Suppose we have H = 10. 10 + 97 - 10 = 97 = 'a'. Now suppose we have H = 15. 15 + 97 - 10 = 97 + 5 = 102 = 'f'. There you go. This confused me, since we are somehow juggling with numeric values for math and ASCII character values. This dovetails perfectly with the previous conditional block, as if you represent a numerical, 'mathematical' number in base 10, you gotta start at character 48, '0', on the ASCII table. And I did not even modify the < 10, when I checked that; I did it all in my head.
		strncat(s, &T[0], 1); //strcat(s, T[0]);
		if ( L < 10 )
			T[1] = T[1] + '0';
		else
			T[1] = T[1] + 'a' - 10;
		strncat(s, &T[1], 1); //strcat(s, T[1]);
		i--;
	}
	return s;
}

cnvrt(int i)
{

	nbr = (intmax_t)va_arg(*args, signed int);
	nbr = (unsigned long)va_arg(*args, void *);
	nbr = ((uintmax_t)va_arg(*args, unsigned int))

	if ( -INT_MAX <= i && i <= INT_MAX )
		i = (intmax_t) i; //i = (signed int) i;
	if ( INT_MAX < i && i <= INT_MAX * 2 + 1 )
		i = (uintmax_t) i; //i = (unsigned int) i;

	if ( strcmp("%d", p) )
		s = itoa( i );
	if ( strcmp("%o", p) )
		s = ntoa_8( i ); // or ntoa_8( i );
	if ( strcmp("%u", p) )
		s = uitoa( i );
	if ( strcmp("%x", p) )
		s = ntoa_16( i );


	return 
}

int main()
{
	void* p;

	printf("p:\t%s\n", cnvrtp(p));
	printf("p:\t%p\n", p);
	return 0;
} //	debug code

/*//	cnvrt.c
////	CNVRT
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
