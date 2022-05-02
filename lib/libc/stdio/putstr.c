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

///* ************************************************************************** */
///*                                                                            */
///*                                                        :::      ::::::::   */
///*   ft_putstr.c                                        :+:      :+:    :+:   */
///*                                                    +:+ +:+         +:+     */
///*   By: kbertin <kbertin@student.42.fr>            +#+  +:+       +#+        */
///*                                                +#+#+#+#+#+   +#+           */
///*   Created: 2014/11/01 13:49:11 by kbertin           #+#    #+#             */
///*   Updated: 2014/11/01 21:04:09 by kbertin          ###   ########.fr       */
///*                                                                            */
///* ************************************************************************** */
//
//#include <unistd.h>
//
//void ft_putchar(char c)
//{
//	write(1, &c, 1);
//}
//
//void ft_putstr(char* s)
//{
//	int i = 0;
//
//	while (s[i] != '\0')
//	{
//		ft_putchar(s[i]);
//		i++;
//	}
//}
///*void ft_putstr(char* s)
//{
//	while (*s)
//	{
//		ft_putchar(*s);
//		s++;
//	}
//}*/

///*
//**
//** QWASAR.IO -- my_putstr
//**
//** @param {char*} param_1
//**
//** @return {void}
//**
//*/
//
//#include <unistd.h>
//
//void my_putchar(char c)
//{
//	write(1, &c, 1);
//} // KVPB's PUTCHAR
//
//void my_putstr(char* s)
//{
//	int i = 0;
//
//	while (s[i] != 0)
//	{
//		my_putchar(s[i]);
//		i++;
//	}
//} // KVPB's AIPUTSTR
///*void ft_putstr(char* s)
//{
//	while (*s)
//	{
//		ft_putchar(*s);
//		s++;
//	}
//}*/ // KVPB's PAPUTSTR

/*//	putstr.c
////	PUTSTR
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

#include "../include/stdio.h"
#include <stddef.h> // size_t
#include <string.h> // strlen //	unused
#include <unistd.h> // write
//#include <stdio.h> // printf //	debug

//#undef strlen
#undef putstr

/*size_t strlen(const char* s)
{
	char* p = (char*) s; // `(char*)`, or else 'putstr.c:110:8: warning: initializing 'char *' with an expression of type 'const char *' discards qualifiers [-Wincompatible-pointer-types-discards-qualifiers]' ([ -e ./0 ] && rm 0; gcc -o 0 putstr.c && ./0; rm 0;).

	while( *p++ );
	return ( p - s - 1 ); // `- 1`, because it 'returns the number of characters that precede rge terminating NUL character' (man strlen).
}*/ // KVPB's STRLEN

int putstr(const char* s)
{
	return write(1, s, strlen(s));
} // KVPB's PUTSTR

/*int main()
{
	char* s = "bfrimin, rends l'argent.\n";

	putstr(s);
	printf("%i\n", putstr(s));
	return 0;
}*/ //	debug code
