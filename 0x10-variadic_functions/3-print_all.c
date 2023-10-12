#include "variadic_functions.h"
/**
 * print_all -  prints anything
 * @format:  list of types of arguments passed to the function
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str;
	va_list args;

	va_start(args, format);

	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				{
					str = va_arg(args, char *);
					if (str == NULL)
						printf("(nil)");
					else
						printf("%s", str);
				}
				break;
			default:
				break;
		}
		i++;
		if (format[i] != '\0' && (format[i] == 'c' || format[i] == 'i' ||
				format[i] == 'f' || format[i] == 's'))
		{
			printf(", ");
		}
	}
	va_end(args);
	printf("\n");
}
