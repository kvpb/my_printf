/*
**
** QWASAR.IO -- my_strrchr
**
** @param {char*} param_1
** @param {char} param_2
**
** @return {char*}
**
*/

char* strrchr(char* s, char c)
{
	char* p = (char*) 0;
	int i = 0;

	while (s[i] != 0)
	{
		if (s[i] == c)
			p = (char*) &s[i];
		i++;
	}
	return p;
}
