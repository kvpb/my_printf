/*
**
** QWASAR.IO -- my_strstr
**
** @param {char*} param_1
** @param {char*} param_2
**
** @return {char*}
**
*/

#include <string.h>
#include <stddef.h>
//#include <stdio.h> //	debug code

char* strstr(char* s_1, char* s_2)
{
	int l_s_1 = strlen(s_1);
	int l_s_2 = strlen(s_2);

	if ( !l_s_2 )
		return (char*) s_1;
	while ( l_s_1 >= l_s_2 )
	{
		l_s_1--;
		if ( !memcmp(s_1, s_2, l_s_2) )
			return (char*) s_1;
		s_1++;
	}
	return NULL;
}

/*int main()
{
	char* s_1_1 = "My name is Karl.";
	char* s_1_2 = "K";
	char* s_2_1 = "My name is Karl.";
	char* s_2_2 = "Karl";
	char* s_3_1 = "My name is Karl.";
	char* s_3_2 = "a";
	char* s_4_1 = "My name is Karl.";
	char* s_4_2 = "ame";
	char* s_5_1 = "My name is Karl.";
	char* s_5_2 = "Z";
	char* s_6_1 = "My name is Karl.";
	char* s_6_2 = "Zorro";

	printf("%s\n", my_strstr(s_1_1, s_1_2));
	printf("%s\n", my_strstr(s_2_1, s_2_2));
	printf("%s\n", my_strstr(s_3_1, s_3_2));
	printf("%s\n", my_strstr(s_4_1, s_4_2));
	printf("%s\n", my_strstr(s_5_1, s_5_2));
	printf("%s\n", my_strstr(s_6_1, s_6_2));
}*/
//	debug code
