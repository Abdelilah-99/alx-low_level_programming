#include "main.h"
/**
 * print_triangle - triangle with 90degree
 * @size: i've never forget u
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		putchar(' ');
		putchar('\n');
	}
	for (i = 1; i <= size; i++)
	{
		for (j = size; j > 0; j--)
		{
			if (j <= i)
				putchar('#');
			else
				putchar(' ');
		}
		putchar('\n');
	}
}
