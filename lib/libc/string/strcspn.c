//#include <stdio.h> //	debug code

int strcspn( char* s, char* C ) //size_t strcspn(const char *s1, register const char *s2) //size_t strspn(const char *s, const char *charset);
{
	int i = 0;
	int j = 0;
	int t = 0;

	while ( s[i] != 0 && t == 0 ) //while ( s[i] != 0 ) // I don't like dirtily breaking out of while loops by returning a value. It looks like shit. I'd like to cleanly do it. How?
	{
		while ( C[j] != 0 && t == 0 ) // Could inverting the algorithm help? Or else I have to make the while stop.
		{
			if ( C[j] == s[ i + 1 ] ) // Hey, can't I use a flag?
			{
				//return i;
				t = 1; //b = true; // But I must use it. How?
			}
			j++;
		}
		j = 0;
		i += 1; //i++;
	} // As a condition, pure and simple! Now, is this the most optimized way to do it? I doubt it.
	return i; // 'computes the string array index of the first character of s which is also in charset, else the index of the first null character.' `man strcspn`, 2021
}

/*int main()
{
	//char* C;
	//char* s;
	char* s_0 = "abcdefghijklmnopqrstuvwxyz";
	char* C_0 = "n";
	char* s_1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char* C_1 = "N";
	char* s_2 = "ABCdefGHIjklMNOpqrSTUvwxYZ";
	char* C_2 = "n";
	char* s_3 = "Abc def, ghi jkl. Mno pqr! Stu vwx? y: z;";
	char* C_3 = "A";
	char* s_4 = "Abc def, ghi jkl. Mno pqr! Stu vwx? y: z;";
	char* C_4 = "a";
	char* s_5 = "Abc def, ghi jkl. Mno pqr! Stu vwx? y: z;";
	char* C_5 = "Abc";
	char* s_6 = "Abc def, ghi jkl. Mno pqr! Stu vwx? y: z;";
	char* C_6 = "mNO";
	char* s_7 = "Abc def, ghi jkl. Mno pqr! Stu vwx? y: z;";
	char* C_7 = "sTu";
	char* s_8 = "Abc def, ghi jkl. Mno pqr! Stu vwx? y: z;";
	char* C_8 = "StU";
	char* s_9 = "Abc def, ghi jkl. Mno pqr! Stu vwx? y: z;";
	char* C_9 = "Abc def, ghi jkl. Mno pqr! Stu vwx? y: z;";
	char* s_10 = "Abc def, ghi jkl. Mno pqr! Stu vwx? y: z;";
	char* C_10 = "";
	char* s_11 = "";
	char* C_11 = "Abc def, ghi jkl. Mno pqr! Stu vwx? y: z;";
	char* s_12 = "";
	char* C_12 = "";
	char* s_100 = " !\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~";
	char* C_100 = "Aa0Bb1Cc2Dd3Ee4Ff5Gg6Hh7Ii8Jj9KkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";

	//printf("%d\n", strcspn(s, C));
	printf("%d\n", strcspn(s_0, C_0));
	printf("%d\n", strcspn(s_1, C_1));
	printf("%d\n", strcspn(s_2, C_2));
	printf("%d\n", strcspn(s_3, C_3));
	printf("%d\n", strcspn(s_4, C_4));
	printf("%d\n", strcspn(s_5, C_5));
	printf("%d\n", strcspn(s_6, C_6));
	printf("%d\n", strcspn(s_7, C_7));
	printf("%d\n", strcspn(s_8, C_8));
	printf("%d\n", strcspn(s_9, C_9));
	printf("%d\n", strcspn(s_10, C_10));
	printf("%d\n", strcspn(s_11, C_11));
	printf("%d\n", strcspn(s_12, C_12));
	printf("%d\n", strcspn(s_100, C_100));
	return 0;
}*/ //	debug code
