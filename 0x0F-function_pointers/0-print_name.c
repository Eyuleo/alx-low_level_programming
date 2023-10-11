#include "function_pointers.h"
/**
 * print_name - prints a name.
 *@name: the name to print
 *@f: a pointer to the function to use to print the name
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	if (f == NULL)
		return;
	f(name);
}
