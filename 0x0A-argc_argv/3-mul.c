#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - i used atoi to chang the string carachter of number
 * to integer and i give mul 1 caus i need initialization
 * @argc: kjh
 * @argv: kjh
 * Return: 1 if there is less than 2 arg and 0 if the programm
 * run
 */
int main(int argc, char *argv[])
{
	int i = 1, mul;

	if (argc > 2)
	{
		mul = 1;
		while (i < argc)
		{
			mul *= atoi(argv[i]);
			i++;
		}
			printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
