/*
**
** QWASAR.IO -- reverse_string
**
** @param {char*} param_1
**
** @return {char*}
**
*/

#include <string.h>
//#include <stdio.h> //	debug code

char* strrev(char* s)
{
	char c;
	int l = strlen((char*) s);
	int i = 0;
	int j = l - 1;

	while ( i < j )
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		i++;
		j--;
	}
	return s;
}

/*
Example of main
*/
/*int main() {
	char *my_str = strdup("Hello");
	
	printf("Before reverse -> %s\n", my_str);
	printf("Reverse -> %s\n", reverse_string(my_str));
	return 0;
}*/
//	debug code
