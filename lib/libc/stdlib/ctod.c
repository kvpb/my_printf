/*//  Copyright 2021 Karl V. P. Bertin
////
////  Redistribution   and   use   in   source   and   binary   forms,
////  with   or   without   modification,   are   permitted   provided   that
////  t h e   f o l l o w i n g   c o n d i t i o n s   a r e   m e t :
////
////    1.  Redistributions   of   source   code   must   retain
////        the   above   copyright   notice,   this   list   of   conditions
////        a n d   t h e   f o l l o w i n g   d i s c l a i m e r.
////
////    2.  Redistributions   in   binary   form   must   reproduce
////        the   above   copyright   notice,   this   list   of   conditions
////        and   the   following   disclaimer   in   the   documentation
////        and/or   other   materials   provided   with   the   distribution.
////
////    3.  Neither   the   name   of   the   copyright   holder
////        nor the names of its contributors may be used to endorse or promote
////        products   derived   from   this   software
////        without   specific   prior   written   permission.
////
////  THIS   SOFTWARE   IS   PROVIDED   BY   THE   COPYRIGHT   HOLDERS
////  AND  CONTRIBUTORS  "AS  IS"  AND  ANY  EXPRESS  OR  IMPLIED  WARRANTIES,
////  INCLUDING,   BUT   NOT   LIMITED   TO,   THE   IMPLIED   WARRANTIES
////  OF   MERCHANTABILITY   AND   FITNESS   FOR   A   PARTICULAR   PURPOSE
////  ARE   DISCLAIMED.   IN   NO   EVENT   SHALL   THE   COPYRIGHT   HOLDER
////  OR  CONTRIBUTORS  BE  LIABLE  FOR  ANY  DIRECT,  INDIRECT,  INCIDENTAL,
////  SPECIAL,   EXEMPLARY,   OR   CONSEQUENTIAL   DAMAGES   (INCLUDING,
////  BUT  NOT  LIMITED  TO,  PROCUREMENT  OF  SUBSTITUTE  GOODS  OR  SERVICES;
////  LOSS   OF   USE,   DATA,   OR   PROFITS;   OR   BUSINESS   INTERRUPTION)
////  HOWEVER   CAUSED   AND   ON   ANY   THEORY   OF   LIABILITY,
////  WHETHER   IN   CONTRACT,   STRICT   LIABILITY,   OR   TORT
////  (INCLUDING   NEGLIGENCE   OR   OTHERWISE)   ARISING   IN   ANY   WAY
////  OUT   OF   THE   USE   OF   THIS   SOFTWARE,   EVEN   IF   ADVISED
*///  O F   T H E   P O S S I B I L I T Y   O F   S U C H   D A M A G E .

//#include "../include/stdlib.h"
//#include <stdio.h> //	debug code

#define isdigit(d) ('0' <= (d) && (d) <= '9') // KVPB's IsDigit function-like macro version
//#define ctod(c) ((c) - '0') // KVPB's CToD function-like macro version https://www.ibm.com/docs/en/i/7.2?topic=directive-function-like-macros https://gcc.gnu.org/onlinedocs/cpp/Function-like-Macros.html

#undef ctod

int ctod(int c)
{
	if (isdigit(c))
		return ( c - '0' ); // Why?: Because the character 0 is the 48th one. Look at the ASCII table.
	return -1;
} // KVPB's CToD

/*int main()
{
	const char c_48 = '0';
	const char c_57 = '9';
	const char c   =  58;

	printf("c_48:\t%c,\t\td_0\t= %d;\n", c_48, ctod((int) c_48));
	printf("c_57:\t%c,\t\td_9\t= %d;\n", c_57, ctod((int) c_57));
	printf("c:\t%c,\t\td\t= %d;\n",      c,    ctod((int) c)   );
	printf("%ld %ld\n", c_48, ctod((int) c_48)); // should make GCC warn us.
	return 0;
}*/ //	debug code

/*//	ctod.c
////	CToD
////
////	Karl V. P. Bertin `kvpb`
////	+1 (DDD) DDD-DDDD
////	+33 A BB BB BB BB
////	local-part@domain
////	https://www.linkedin.com/in/karlbertin
////	https://twitter.com/kvpb777
////	https://github.com/kvpb
////	https://www.instagram.com/add/karlbertin
*///	https://vm.tiktok.com/ZSwAmcFh/
