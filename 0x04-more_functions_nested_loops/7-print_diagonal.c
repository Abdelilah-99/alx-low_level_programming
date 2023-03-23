#include "main.h"
/**
 * print_diagonal - make a diagona
 * @n: number of slash that make a diagonat
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	putchar('\n');
	for (i = 1; i <= n; i++)
	{
		for (j = 1 ; j <= n; j++)
		{
		if (i == j)
		putchar('\\');
		else
		putchar(' ');
		}
		putchar('\n');
	}
}
