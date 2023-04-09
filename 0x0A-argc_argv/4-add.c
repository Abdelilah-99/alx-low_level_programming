#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - this is a proramme that check if the arg are digit and cal the sum
 * if it not it peint error and return 1
 * @argc: kif l3ada
 * @argv: htta hya
 * Return: 1 if there an error else 0
 */
int main(int argc, char *argv[])
{
	int i = 0, sum = 0, tst = 1, j;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; argv[i]; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
		if (!isdigit(argv[i][j]) && argv[i][j] != '-')
			{
				tst = 0;
				break;
			}
		}
	}
	if (tst)
	{
		i = 1;
		while (i < argc)
		{
			sum += atoi(argv[i]);
			i++;
		}
		printf("%d\n", sum);
	}
	else
		{
			printf("Error\n");
			return (1);
		}
	return (0);
}
