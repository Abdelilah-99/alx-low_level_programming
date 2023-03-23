#include "main.h"
/**
 * more_numbers - ramadan mubarak
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			putchar((j / 10) + 48);
			putchar((j % 10) + 48);
		}
		putchar('\n');
	}
}

