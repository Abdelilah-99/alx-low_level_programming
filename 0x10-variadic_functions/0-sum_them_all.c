#include "main.h"
/**
 * sum_them_all - function ta7ssab sum b arg
 * @n: nmbr ds args
 * Return: sum or 0 if n == 0
*/
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);
	va_list T;

	int i = 0;
	int sum = 0;

	va_start(T, n);
	for (i = 0; i < n; i++)
		sum += va_arg(T, int);

	va_end(T);

	return (sum);
}
