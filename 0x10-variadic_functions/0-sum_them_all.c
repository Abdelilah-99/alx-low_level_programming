#include "variadic_functions.h"
/**
 * sum_them_all - function ta7ssab sum b arg
 * @n: nmbr ds args
 * Return: sum or 0 if n == 0
*/
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);
	unsigned int i = 0;
	int sum = 0;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}
