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
	for (j = i; j <= 9; j++)
	{
	for (x = i; x <= 9; x++)
	{
	for (y = x == i ? j + 1 : 0  ; y <= 9; y++)
	{
	putchar(i + '0');
	putchar(j + '0');
	putchar(' ');
	putchar(x + '0');
	putchar(y + '0');
	if (i == 8 && j == 9 && x == 9 && y == 9)
	break;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
