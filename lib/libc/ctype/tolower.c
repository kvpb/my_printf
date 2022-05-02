/*
**
** QWASAR.IO -- my_downcase
**
** @param {char*} param_1
**
** @return {char*}
**
*/

//#include <string.h> //	debug code
//#include <stdio.h> //	debug code

char* tolower(char* s)
{
	int i = 0;

	while ( s[i] != 0 )
	{
		if ( 65 <= s[i] && s[i] <= 90 )
			s[i] += 32;
		i++;
	}
	return s;
}

/*
Example of main
*/
/*int main() {
	char *my_str = strdup("AbcE Fgef1");
	
	printf("RANDOM CASE -> %s\n", my_str);
	printf("DOWNCASE    -> %s\n", my_downcase(my_str));
	return 0;
}*/
//	debug code
