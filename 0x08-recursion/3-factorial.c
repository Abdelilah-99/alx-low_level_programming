#include "main.h"
/**
 * factorial - n*(n-1)
 * @n: he decide
 * Return: -1 thats happen and 1 is the base case if u do 0 the result is 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n < 2)
		return (1);
	return (n * factorial(n - 1));
}
