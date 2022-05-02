#include <string.h>
//#include <stdio.h> //	debug code

char* strcat(char *s_2, char *s)
{
	strcpy( s_2 + strlen( s_2 ), s );
	return s_2;
}

/*int main()
{
	char* s_2_0 = "My name ";
	char* s_0 = "is Karl.";

	printf("%s\n", strcat(s_2_0, s_0));
}*/ //	debug code
