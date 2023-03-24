#include <stdio.h>
/**
 * main - yuyu
 * Return: Returns 0
 */
int main(void)
{
	long i, max = 1, n = 612852475143;

	for (i = 2; i <= n; i++)
	{
		while (n % i == 0)
		{
			if (max < i)
			{
				max = i;
				}
		n = n / i;
		}
	}
	printf("%lu\n", max);
	return (0);
}
