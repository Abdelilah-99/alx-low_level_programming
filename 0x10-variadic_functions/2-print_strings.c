#include "variadic_functions.h"
/**
 * print_strings - fuction bach n7ett string
 * @separator: separator]
 * @n: nmbr d arg
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ls;
	unsigned int i = 0;
	char *str;
	int check;

	va_start(ls, n);

	for (; i < n; i++)
	{
		str = va_arg(ls, char *);
		check = 0;
		if (str != NULL)
		{
			check = 1;
			printf("%s", str);
		}
		if (check == 0)
		{
			printf("(nil)");
		}
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ls);
}
