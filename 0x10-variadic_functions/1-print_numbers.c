#include "variadic_functions.h"
/**
 * print_numbers - list and print seperator
 * @separator: for seperate by ', '
 * @n: nmbr of parameter
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ls;
	unsigned int i = 0;

	va_start(ls, n);

	for (; i < n; i++)
	{
		printf("%d", va_arg(ls, int));
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ls);
}
