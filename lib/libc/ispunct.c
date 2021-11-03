/*// Copyright 2014 Karl V. P. Bertin
////
//// Redistribution and use in source and binary forms, with or without modifi-
//// cation, are permitted provided that the following conditions are met:
////
////   1.  Redistributions of source code must retain the above copyright noti-
////       ce, this list of conditions and the following disclaimer.
////
////   2.  Redistributions in binary form must reproduce the above copyright
////       notice, this list of conditions and the following disclaimer in the
////       documentation and/or other materials provided with the distribution.
////
////   3.  Neither the name of the copyright holder nor the names of its con-
////       tributors may be used to endorse or promote products derived from
////       this software without specific prior written permission.
////
//// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS
//// IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
//// THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
//// PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRI-
//// BUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLA-
//// RY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT
//// OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSI-
//// NESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER
//// IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHER-
//// WISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
*/// OF THE POSSIBILITY OF SUCH DAMAGE.

#include "libc.h"
//#include <stdio.h> //	debug code

int ispunct(int c)
{
	return ( ( 
				( 041 <= c && c <= 057 ) 
				|| ( 072 <= c && c <= 0100 ) 
				|| ( 0133 <= c && c <= 0140 ) 
				|| ( 0173 <= c && c <= 0176 )
			) ? 1 : 0 ); //return ( ( isgraph(c) && ! isalnum(c) ) ? 1 : 0 );
}

/*int main()
{
	int c_0 = '\0';
	int c_1 = 1;
	int c_2 = 2;
	int c_3 = 3;
	int c_4 = 4;
	int c_5 = 5;
	int c_6 = 6;
	int c_7 = '\a';
	int c_8 = '\b';
	int c_9 = '\t';
	int c_10 = '\n';
	int c_11 = '\v';
	int c_12 = '\f';
	int c_13 = '\r';
	int c_14 = 14;
	int c_15 = 15;
	int c_16 = 16;
	int c_17 = 17;
	int c_18 = 18;
	int c_19 = 19;
	int c_20 = 20;
	int c_21 = 21;
	int c_22 = 22;
	int c_23 = 23;
	int c_24 = 24;
	int c_25 = 25;
	int c_26 = 26;
	int c_27 = '\e';
	int c_28 = 28;
	int c_29 = 29;
	int c_30 = 30;
	int c_31 = 31;
	int c_32 = ' ';
	int c_33 = '!';
	int c_34 = '"';
	int c_35 = '#';
	int c_36 = '$';
	int c_37 = '%';
	int c_38 = '&';
	int c_39 = '\'';
	int c_40 = '(';
	int c_41 = ')';
	int c_42 = '*';
	int c_43 = '+';
	int c_44 = ',';
	int c_45 = '-';
	int c_46 = '.';
	int c_47 = '/';
	int c_48 = '0';
	int c_49 = '1';
	int c_50 = '2';
	int c_51 = '3';
	int c_52 = '4';
	int c_53 = '5';
	int c_54 = '6';
	int c_55 = '7';
	int c_56 = '8';
	int c_57 = '9';
	int c_58 = ':';
	int c_59 = ';';
	int c_60 = '<';
	int c_61 = '=';
	int c_62 = '>';
	int c_63 = '?';
	int c_64 = '@';
	int c_65 = 'A';
	int c_66 = 'B';
	int c_67 = 'C';
	int c_68 = 'D';
	int c_69 = 'E';
	int c_70 = 'F';
	int c_71 = 'G';
	int c_72 = 'H';
	int c_73 = 'I';
	int c_74 = 'J';
	int c_75 = 'K';
	int c_76 = 'L';
	int c_77 = 'M';
	int c_78 = 'N';
	int c_79 = 'O';
	int c_80 = 'P';
	int c_81 = 'Q';
	int c_82 = 'R';
	int c_83 = 'S';
	int c_84 = 'T';
	int c_85 = 'U';
	int c_86 = 'V';
	int c_87 = 'W';
	int c_88 = 'X';
	int c_89 = 'Y';
	int c_90 = 'Z';
	int c_91 = '[';
	int c_92 = '\\';
	int c_93 = ']';
	int c_94 = '^';
	int c_95 = '_';
	int c_96 = '`';
	int c_97 = 'a';
	int c_98 = 'b';
	int c_99 = 'c';
	int c_100 = 'd';
	int c_101 = 'e';
	int c_102 = 'f';
	int c_103 = 'g';
	int c_104 = 'h';
	int c_105 = 'i';
	int c_106 = 'j';
	int c_107 = 'k';
	int c_108 = 'l';
	int c_109 = 'm';
	int c_110 = 'n';
	int c_111 = 'o';
	int c_112 = 'p';
	int c_113 = 'q';
	int c_114 = 'r';
	int c_115 = 's';
	int c_116 = 't';
	int c_117 = 'u';
	int c_118 = 'v';
	int c_119 = 'w';
	int c_120 = 'x';
	int c_121 = 'y';
	int c_122 = 'z';
	int c_123 = '{';
	int c_124 = '|';
	int c_125 = '}';
	int c_126 = '~';
	int c_127 = 127;

	printf("NUL\t%d\n", ispunct(c_0));
	printf("SOH\t%d\n", ispunct(c_1));
	printf("STX\t%d\n", ispunct(c_2));
	printf("ETX\t%d\n", ispunct(c_3));
	printf("EOT\t%d\n", ispunct(c_4));
	printf("ENQ\t%d\n", ispunct(c_5));
	printf("ACK\t%d\n", ispunct(c_6));
	printf("BEL\t%d\n", ispunct(c_7));
	printf("BS\t%d\n", ispunct(c_8));
	printf("HT\t%d\n", ispunct(c_9));
	printf("NL\t%d\n", ispunct(c_10));
	printf("VT\t%d\n", ispunct(c_11));
	printf("NP\t%d\n", ispunct(c_12));
	printf("CR\t%d\n", ispunct(c_13));
	printf("SO\t%d\n", ispunct(c_14));
	printf("SI\t%d\n", ispunct(c_15));
	printf("DLE\t%d\n", ispunct(c_16));
	printf("DC1\t%d\n", ispunct(c_17));
	printf("DC2\t%d\n", ispunct(c_18));
	printf("DC3\t%d\n", ispunct(c_19));
	printf("DC4\t%d\n", ispunct(c_20));
	printf("NAK\t%d\n", ispunct(c_21));
	printf("SYN\t%d\n", ispunct(c_22));
	printf("ETB\t%d\n", ispunct(c_23));
	printf("CAN\t%d\n", ispunct(c_24));
	printf("EM\t%d\n", ispunct(c_25));
	printf("SUB\t%d\n", ispunct(c_26));
	printf("ESC\t%d\n", ispunct(c_27));
	printf("FS\t%d\n", ispunct(c_28));
	printf("GS\t%d\n", ispunct(c_29));
	printf("RS\t%d\n", ispunct(c_30));
	printf("US\t%d\n", ispunct(c_31));
	printf("SP\t%d\n", ispunct(c_32));
	printf("!\t%d\n", ispunct(c_33));
	printf("\"\t%d\n", ispunct(c_34));
	printf("#\t%d\n", ispunct(c_35));
	printf("$\t%d\n", ispunct(c_36));
	printf("%%\t%d\n", ispunct(c_37));
	printf("&\t%d\n", ispunct(c_38));
	printf("'\t%d\n", ispunct(c_39));
	printf("\(\t%d\n", ispunct(c_40));
	printf(")\t%d\n", ispunct(c_41));
	printf("*\t%d\n", ispunct(c_42));
	printf("+\t%d\n", ispunct(c_43));
	printf(",\t%d\n", ispunct(c_44));
	printf("-\t%d\n", ispunct(c_45));
	printf(".\t%d\n", ispunct(c_46));
	printf("/\t%d\n", ispunct(c_47));
	printf("0\t%d\n", ispunct(c_48));
	printf("1\t%d\n", ispunct(c_49));
	printf("2\t%d\n", ispunct(c_50));
	printf("3\t%d\n", ispunct(c_51));
	printf("4\t%d\n", ispunct(c_52));
	printf("5\t%d\n", ispunct(c_53));
	printf("6\t%d\n", ispunct(c_54));
	printf("7\t%d\n", ispunct(c_55));
	printf("8\t%d\n", ispunct(c_56));
	printf("9\t%d\n", ispunct(c_57));
	printf(":\t%d\n", ispunct(c_58));
	printf(";\t%d\n", ispunct(c_59));
	printf("<\t%d\n", ispunct(c_60));
	printf("=\t%d\n", ispunct(c_61));
	printf(">\t%d\n", ispunct(c_62));
	printf("?\t%d\n", ispunct(c_63));
	printf("@\t%d\n", ispunct(c_64));
	printf("A\t%d\n", ispunct(c_65));
	printf("B\t%d\n", ispunct(c_66));
	printf("C\t%d\n", ispunct(c_67));
	printf("D\t%d\n", ispunct(c_68));
	printf("E\t%d\n", ispunct(c_69));
	printf("F\t%d\n", ispunct(c_70));
	printf("G\t%d\n", ispunct(c_71));
	printf("H\t%d\n", ispunct(c_72));
	printf("I\t%d\n", ispunct(c_73));
	printf("J\t%d\n", ispunct(c_74));
	printf("K\t%d\n", ispunct(c_75));
	printf("L\t%d\n", ispunct(c_76));
	printf("M\t%d\n", ispunct(c_77));
	printf("N\t%d\n", ispunct(c_78));
	printf("O\t%d\n", ispunct(c_79));
	printf("P\t%d\n", ispunct(c_80));
	printf("Q\t%d\n", ispunct(c_81));
	printf("R\t%d\n", ispunct(c_82));
	printf("S\t%d\n", ispunct(c_83));
	printf("T\t%d\n", ispunct(c_84));
	printf("U\t%d\n", ispunct(c_85));
	printf("V\t%d\n", ispunct(c_86));
	printf("W\t%d\n", ispunct(c_87));
	printf("X\t%d\n", ispunct(c_88));
	printf("Y\t%d\n", ispunct(c_89));
	printf("Z\t%d\n", ispunct(c_90));
	printf("[\t%d\n", ispunct(c_91));
	printf("\\\t%d\n", ispunct(c_92));
	printf("]\t%d\n", ispunct(c_93));
	printf("^\t%d\n", ispunct(c_94));
	printf("_\t%d\n", ispunct(c_95));
	printf("`\t%d\n", ispunct(c_96));
	printf("a\t%d\n", ispunct(c_97));
	printf("b\t%d\n", ispunct(c_98));
	printf("c\t%d\n", ispunct(c_99));
	printf("d\t%d\n", ispunct(c_100));
	printf("e\t%d\n", ispunct(c_101));
	printf("f\t%d\n", ispunct(c_102));
	printf("g\t%d\n", ispunct(c_103));
	printf("h\t%d\n", ispunct(c_104));
	printf("i\t%d\n", ispunct(c_105));
	printf("j\t%d\n", ispunct(c_106));
	printf("k\t%d\n", ispunct(c_107));
	printf("l\t%d\n", ispunct(c_108));
	printf("m\t%d\n", ispunct(c_109));
	printf("n\t%d\n", ispunct(c_110));
	printf("o\t%d\n", ispunct(c_111));
	printf("p\t%d\n", ispunct(c_112));
	printf("q\t%d\n", ispunct(c_113));
	printf("r\t%d\n", ispunct(c_114));
	printf("s\t%d\n", ispunct(c_115));
	printf("t\t%d\n", ispunct(c_116));
	printf("u\t%d\n", ispunct(c_117));
	printf("v\t%d\n", ispunct(c_118));
	printf("w\t%d\n", ispunct(c_119));
	printf("x\t%d\n", ispunct(c_120));
	printf("y\t%d\n", ispunct(c_121));
	printf("z\t%d\n", ispunct(c_122));
	printf("{\t%d\n", ispunct(c_123));
	printf("|\t%d\n", ispunct(c_124));
	printf("}\t%d\n", ispunct(c_125));
	printf("~\t%d\n", ispunct(c_126));
	printf("DEL\t%d\n", ispunct(c_127));
	return 0;
}*/
//	debug code

/*//	ispunct.c
////	IsPunct
////
////	Karl V. P. Bertin `kvpb`
////	+1 (DDD) DDD-DDDD
////	local-part@domain
////	https://www.linkedin.com/in/karlbertin
////	https://github.com/kvpb
////	https://upskill.us.qwasar.io/users/bertin_k
////
*///	The IsPunct function tests for any printing character except space (' ') or a character for which IsAlnum is true.
