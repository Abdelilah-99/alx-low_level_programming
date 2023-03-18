#include <stdio.h>
/**
 * main - im happy hamdullah
 * Return: Returns 0
 */
int main(void)
{
	int i, j, x, y;

	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
	{
	for (x = 0; x <= 9; x++)
	{
	for (y = 0; y <= 9; y++)
	{
	putchar(i + '0');
	putchar(j + '0');
	putchar(' ');
	putchar(x + '0');
	putchar(y + '0');
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
