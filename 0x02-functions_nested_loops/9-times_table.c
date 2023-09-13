#include <stdio.h>
#include "main.h"
/**
 * multiples of 9
 *
 * return multiple table
**/
void times_table(void)
{
	int i, j;
	
    for (i = 0; i < 10; i++)
    {
        for(j = 0; j < 10; j++)
        {
            int result = i*j;

            if (j == 9)
	    {
            printf("%d", result);
            }
            else
            {
            printf("%d", result);
            putchar(',');
            printf(" ");
            }
        }
        printf("\n");
    }
}
