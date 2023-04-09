#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main - this is a proramme that check if the arg are digit and cal the sum
 * if it not it peint error and return 1
 * @argc: kif l3ada
 * @argv: htta hya
 * Return: 1 if there an error else 0
 */
int main(int argc, char *argv[])
{
	int i = 0, sum, tst = 1;
	
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; argv[i] != NULL; i++)
	{
		if (!isdigit(argv[i][0]))
		{
			tst = 0;
			break;
		}
	}
	if (tst)
	{
		i = 1;
		sum = 0;
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
