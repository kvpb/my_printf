/*
**
** QWASAR.IO -- my_recursive_pow
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
	int x;

	if ( n == 0 ) // If the exponent is 0,
		return 1; // the result is 1.
	if ( n % 2 == 0 ) // If the exponent is an even number,
	{
		x = pow( b, n / 2 ); // the result of the exponentiation is the base raised to the power of half of the exponent,
		return ( x * x );
		// and YOLO,
	}
	else // or else
		return ( b * pow( b, n - 1 ) ); // YOLO, anyway.
}

/*int main()
{
	printf("%d\n", my_recursive_pow(-10, 3));
	printf("%d\n", my_recursive_pow(-10, 2));
	printf("%d\n", my_recursive_pow(-10, 1));
	printf("%d\n", my_recursive_pow(-10, 0));
	printf("\n");
	printf("%d\n", my_recursive_pow(-3, 3));
	printf("%d\n", my_recursive_pow(-3, 2));
	printf("%d\n", my_recursive_pow(-3, 1));
	printf("%d\n", my_recursive_pow(-3, 0));
	printf("\n");
	printf("%d\n", my_recursive_pow(-2, 3));
	printf("%d\n", my_recursive_pow(-2, 2));
	printf("%d\n", my_recursive_pow(-2, 1));
	printf("%d\n", my_recursive_pow(-2, 0));
	printf("\n");
	printf("%d\n", my_recursive_pow(-1, 3));
	printf("%d\n", my_recursive_pow(-1, 2));
	printf("%d\n", my_recursive_pow(-1, 1));
	printf("%d\n", my_recursive_pow(-1, 0));
	printf("\n");
	printf("%d\n", my_recursive_pow(-0, 3));
	printf("%d\n", my_recursive_pow(-0, 2));
	printf("%d\n", my_recursive_pow(-0, 1));
	printf("%d\n", my_recursive_pow(-0, 0));
	printf("\n");
	printf("%d\n", my_recursive_pow(0, 0));
	printf("%d\n", my_recursive_pow(0, 1));
	printf("%d\n", my_recursive_pow(0, 2));
	printf("%d\n", my_recursive_pow(0, 3));
	printf("\n");
	printf("%d\n", my_recursive_pow(1, 2));
	printf("%d\n", my_recursive_pow(1, 1));
	printf("%d\n", my_recursive_pow(1, 2));
	printf("%d\n", my_recursive_pow(1, 3));
	printf("\n");
	printf("%d\n", my_recursive_pow(2, 0));
	printf("%d\n", my_recursive_pow(2, 1));
	printf("%d\n", my_recursive_pow(2, 2));
	printf("%d\n", my_recursive_pow(2, 3));
	printf("\n");
	printf("%d\n", my_recursive_pow(3, 0));
	printf("%d\n", my_recursive_pow(3, 1));
	printf("%d\n", my_recursive_pow(3, 2));
	printf("%d\n", my_recursive_pow(3, 3));
	printf("\n");
	printf("%d\n", my_recursive_pow(10, 2));
	printf("%d\n", my_recursive_pow(10, 1));
	printf("%d\n", my_recursive_pow(10, 2));
	printf("%d\n", my_recursive_pow(10, 3));
	return 0;
}*/
//	debug code
