#include <stdio.h>
/**
 * main - yu
 * Return: Returns 0
 */
int main(void)
{
	long fi = 0, ff = 1, s, c;

	for (c = 0; c < 50; c++)
	{
		s = fi + ff;
		printf("%l", s);
		fi = ff;
		ff = s;
		if (c == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
