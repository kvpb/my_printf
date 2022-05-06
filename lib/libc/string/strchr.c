/*
**
** QWASAR.IO -- my_strchr
**
** @param {char*} param_1
** @param {char} param_2
**
** @return {char*}
**
*/

#include <stddef.h>
//#include <stdio.h> //	debug code

char* strchr(char* s, char c)
{
	int i = 0;

	while ( s[i] != c )
	{
		if ( s[i] == 0 )
			return NULL;
		i++;
	}
	return (char*) &s[i];
}

/*int main()
{
	char* s_1 = "My name is Karl.";
	char c_1 = 'K';
	char* s_2 = "My name is Karl.";
	char c_2 = 'a';
	char* s_3 = "My name is Karl.";
	char c_3 = 'z';

	printf("%s\n", my_strchr(s_1, c_1));
	printf("%s\n", my_strchr(s_2, c_2));
	printf("%s\n", my_strchr(s_3, c_3));
}*/
//	debug code
