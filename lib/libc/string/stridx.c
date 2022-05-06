/*
**
** QWASAR.IO -- my_string_index
**
** @param {char*} param_1
** @param {char} param_2
**
** @return {int}
**
*/

//#include <stdio.h> //	debug code

int stridx(char* s, char c)
{
	int i = 0;

	while ( s[i] != 0 )
	{
		if ( s[i] == c )
			return i;
		i++;
	}
	return -1;
}

/*int main()
{
	char* s_0 = "hello";
	char c_0 = 'l';
	char* s_1 = "aaaaa";
	char c_1 = 'b';

	printf("%d\n", my_string_index(s_0, c_0));
	printf("%d\n", my_string_index(s_1, c_1));
}*/
//	debug code
