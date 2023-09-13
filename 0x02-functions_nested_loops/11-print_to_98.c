#include "main.h"
#include <stdio.h>
/**
 * prints integers from n to 98
 *
 * no return 
**/
void print_to_98(int n)
{
    if (n < 98)
    {
    	for (n; n <= 98; n++)
    	{
        	if (n == 98)
        	{
            		printf("%d", n);
        	}
        	else
        	{
            		printf("%d", n);
           		putchar(',');
            		putchar(' ');
        	}
    	}
    }
    else 
    {
    	for (n; n >= 98; n--)
    	{
        	if (n == 98)
        	{
            		printf("%d", n);
        	}
        	else
        	{
            		printf("%d", n);
            		putchar(',');
            		putchar(' ');
        	}
    	}	
    }
    putchar('\n');
}
