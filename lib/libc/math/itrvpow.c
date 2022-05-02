/*
**
** QWASAR.IO -- my_iterative_pow
**
** @param {int} param_1
** @param {int} param_2
**
** @return {int}
**
*/

//#include <stdio.h> //	debug code

int pow( int b, int n )
{
	int x = 1;
	int i = 0;

	if ( n == 0 )
		return 1;
	else if ( n == 1 )
		return n;
	while ( i < n )
	{
		x = x * b;
		i++;
	}
	return x;
}

/*int main()
{
	printf("%d\n", my_iterative_pow(-10, 3));
	printf("%d\n", my_iterative_pow(-10, 2));
	printf("%d\n", my_iterative_pow(-10, 1));
	printf("%d\n", my_iterative_pow(-10, 0));
	printf("\n");
	printf("%d\n", my_iterative_pow(-2, 3));
	printf("%d\n", my_iterative_pow(-2, 2));
	printf("%d\n", my_iterative_pow(-2, 1));
	printf("%d\n", my_iterative_pow(-2, 0));
	printf("\n");
	printf("%d\n", my_iterative_pow(-1, 3));
	printf("%d\n", my_iterative_pow(-1, 2));
	printf("%d\n", my_iterative_pow(-1, 1));
	printf("%d\n", my_iterative_pow(-1, 0));
	printf("\n");
	printf("%d\n", my_iterative_pow(-0, 3));
	printf("%d\n", my_iterative_pow(-0, 2));
	printf("%d\n", my_iterative_pow(-0, 1));
	printf("%d\n", my_iterative_pow(-0, 0));
	printf("\n");
	printf("%d\n", my_iterative_pow(0, 0));
	printf("%d\n", my_iterative_pow(0, 1));
	printf("%d\n", my_iterative_pow(0, 2));
	printf("%d\n", my_iterative_pow(0, 3));
	printf("\n");
	printf("%d\n", my_iterative_pow(1, 2));
	printf("%d\n", my_iterative_pow(1, 1));
	printf("%d\n", my_iterative_pow(1, 2));
	printf("%d\n", my_iterative_pow(1, 3));
	printf("\n");
	printf("%d\n", my_iterative_pow(2, 0));
	printf("%d\n", my_iterative_pow(2, 1));
	printf("%d\n", my_iterative_pow(2, 2));
	printf("%d\n", my_iterative_pow(2, 3));
	printf("\n");
	printf("%d\n", my_iterative_pow(3, 0));
	printf("%d\n", my_iterative_pow(3, 1));
	printf("%d\n", my_iterative_pow(3, 2));
	printf("%d\n", my_iterative_pow(3, 3));
	printf("\n");
	printf("%d\n", my_iterative_pow(10, 2));
	printf("%d\n", my_iterative_pow(10, 1));
	printf("%d\n", my_iterative_pow(10, 2));
	printf("%d\n", my_iterative_pow(10, 3));
	return 0;
}*/
//	debug code
