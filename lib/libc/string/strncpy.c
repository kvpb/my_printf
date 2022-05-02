/*
**
** QWASAR.IO -- my_strncpy
**
** @param {char*} param_1
** @param {char*} param_2
** @param {int} param_3
**
** @return {char*}
**
*/

char* strncpy(char* s_1, char* s_2, int n)
{
	char* s_0 = s_1;
	int i = 0;

	while ( s_2[i] != 0 && i < n )
	{
		s_0[i] = s_2[i];
		i++;
	}
	return s_0;
}

/*
Example of main
*/
/*#include <stdio.h>

int main() {
	char dst[100] = {0};
	char* src = "Hello";
	char dst1[100] = {0};
	char* src1 = "Hi.";
	char dst2[100] = {0};
	char* src2 = "My name is Karl.";
	char dst3[100] = {0};
	char* src3 = "I'm gonna be a billionaire.";
	char dst4[100] = {0};
	char* src4 = "Mark my words.";
	char dst5[100] = {0};
	char* src5 = "Hello. My name is Karl. I'm gonna be a billionaire. Mark my words.";

	printf("my_strncpy -> %s\n", my_strncpy(dst, src, 100));
	printf("my_strncpy -> %s\n", my_strncpy(dst2, src2, 0));
	printf("my_strncpy -> %s\n", my_strncpy(dst2, src2, 10));
	printf("my_strncpy -> %s\n", my_strncpy(dst3, src3, 100));
	printf("my_strncpy -> %s\n", my_strncpy(dst4, src4, 1000));
	printf("my_strncpy -> %s\n", my_strncpy(dst5, src5, 10000));
	return 0;
}*/
//	debug code
