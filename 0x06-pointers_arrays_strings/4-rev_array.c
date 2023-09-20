#include "main.h"
/**
 * reverse_array - reverse array
 * @a: pointera array
 * @n: number of elements in the array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;
	int j = n - 1;

	while (i < n)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
