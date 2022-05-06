/*
**
** QWASAR.IO -- my_upcase
**
** @param {char*} param_1
**
** @return {char*}
**
*/

//#include <string.h> //	debug code
//#include <stdio.h> //	debug code

char* toupper(char* s)
{
	int i = 0;

	while ( s[i] != 0 )
	{
		if ( 97 <= s[i] && s[i] <= 122 )
			s[i] -= 32;
		i++;
	}
	return s;
}

/*
Example of main
*/
/*int main() {
	char *my_str = strdup("AbcE Fgef1");
	char* s_0 = strdup("aBc");
	char* s_1 = strdup("");
	
	printf("RANDOM CASE -> %s\n", my_str);
	printf("UPCASE      -> %s\n", my_upcase(my_str));
	printf("%s\n", s_0);
	printf("%s\n", my_upcase(s_0));
	printf("%s\n", s_1);
	printf("%s\n", my_upcase(s_1));
	return 0;
}*/
//	debug code
