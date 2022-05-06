/*
**
** QWASAR.IO -- my_range
**
** @param {int} param_1
** @param {int} param_2
**
** @return {int*}
**
*/

#include <stdlib.h>
//#include <stdio.h> //	debug code

int* range( int a, int b )
{
    int i = 0;
    int j = a;
    int k = b - a;
    int* A = malloc(k);

    while ( i <= k && a <= j && j <= b )
    {
        A[i] = j;
        i++;
        j++;
    }
    A[i] = 0;
    return A;
}

/*int main()
{
	int a_0 = 1;
	int b_0 = 4;
    int* A_0 = my_range( a_0, b_0 );
    //int i_0;
    int k_0 = b_0 - a_0;
	int a_1 = 7;
	int b_1 = 10;
    int* A_1 = my_range( a_1, b_1 );
    //int i_1;
    int k_1 = b_1 - a_1;
	int a_2 = 10;
	int b_2 = 11;
    int* A_2 = my_range( a_2, b_2 );
    int k_2 = b_2 - a_2;
    //int i_2;
    int i;
    
    for ( i = 0; i < k_0; i++ )
        printf("%d\n", A_0[i]);
    for ( i = 0; i < k_1; i++ )
        printf("%d\n", A_1[i]);
    for ( i = 0; i < k_2; i++ )
        printf("%d\n", A_2[i]);
}*/
//	debug code
