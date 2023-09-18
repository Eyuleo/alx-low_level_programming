#include "main.h"
/**
 *print_array - prints array
 *@a: array variable
 *@n: number of elements in the array
 *Return: nothing
*/
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a+i));
		if(i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
