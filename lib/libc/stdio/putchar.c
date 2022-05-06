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
#include <unistd.h>

#undef putchar
#undef putchr

int putchar(int c)
{
	return write(1, &c, 1);
} // KVPB's PUTCHAR

int putchr(char c)
{
	return write(1, &c, 1);
} // KVPB's PUTCHR

/*int main()
{
	char c[128];
	c[0] = '\0';
	c[1] = 1;
	c[2] = 2;
	c[3] = 3;
	c[4] = 4;
	c[5] = 5;
	c[6] = 6;
	c[7] = '\a';
	c[8] = '\b';
	c[9] = '\t';
	c[10] = '\n';
	c[11] = '\v';
	c[12] = '\f';
	c[13] = '\r';
	c[14] = 14;
	c[15] = 15;
	c[16] = 16;
	c[17] = 17;
	c[18] = 18;
	c[19] = 19;
	c[20] = 20;
	c[21] = 21;
	c[22] = 22;
	c[23] = 23;
	c[24] = 24;
	c[25] = 25;
	c[26] = 26;
	c[27] = '\e';
	c[28] = 28;
	c[29] = 29;
	c[30] = 30;
	c[31] = 31;
	c[32] = ' ';
	c[33] = '!';
	c[34] = '"';
	c[35] = '#';
	c[36] = '$';
	c[37] = '%';
	c[38] = '&';
	c[39] = '\'';
	c[40] = '(';
	c[41] = ')';
	c[42] = '*';
	c[43] = '+';
	c[44] = ',';
	c[45] = '-';
	c[46] = '.';
	c[47] = '/';
	c[48] = '0';
	c[49] = '1';
	c[50] = '2';
	c[51] = '3';
	c[52] = '4';
	c[53] = '5';
	c[54] = '6';
	c[55] = '7';
	c[56] = '8';
	c[57] = '9';
	c[58] = ':';
	c[59] = ';';
	c[60] = '<';
	c[61] = '=';
	c[62] = '>';
	c[63] = '?';
	c[64] = '@';
	c[65] = 'A';
	c[66] = 'B';
	c[67] = 'C';
	c[68] = 'D';
	c[69] = 'E';
	c[70] = 'F';
	c[71] = 'G';
	c[72] = 'H';
	c[73] = 'I';
	c[74] = 'J';
	c[75] = 'K';
	c[76] = 'L';
	c[77] = 'M';
	c[78] = 'N';
	c[79] = 'O';
	c[80] = 'P';
	c[81] = 'Q';
	c[82] = 'R';
	c[83] = 'S';
	c[84] = 'T';
	c[85] = 'U';
	c[86] = 'V';
	c[87] = 'W';
	c[88] = 'X';
	c[89] = 'Y';
	c[90] = 'Z';
	c[91] = '[';
	c[92] = '\\';
	c[93] = ']';
	c[94] = '^';
	c[95] = '_';
	c[96] = '`';
	c[97] = 'a';
	c[98] = 'b';
	c[99] = 'c';
	c[100] = 'd';
	c[101] = 'e';
	c[102] = 'f';
	c[103] = 'g';
	c[104] = 'h';
	c[105] = 'i';
	c[106] = 'j';
	c[107] = 'k';
	c[108] = 'l';
	c[109] = 'm';
	c[110] = 'n';
	c[111] = 'o';
	c[112] = 'p';
	c[113] = 'q';
	c[114] = 'r';
	c[115] = 's';
	c[116] = 't';
	c[117] = 'u';
	c[118] = 'v';
	c[119] = 'w';
	c[120] = 'x';
	c[121] = 'y';
	c[122] = 'z';
	c[123] = '{';
	c[124] = '|';
	c[125] = '}';
	c[126] = '~';
	c[127] = 127;

	for ( int i = 0; i < 128; i++ )
		putchar(c[i]);
	return 0;
}*/ //	debug

/*//	putchar.c
////	PUTCHAR
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
