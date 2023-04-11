#include <stdio.h>
#include <stdlib.h>

/**
 * main - hna had lrogramme yakhdam lminimum d serf lii kayrajja3
 * @argc: The number of command-line arguments == ./xxx ar ag argc =2
 * @argv: the array of arguments
 * Return: 0 if successful, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int DH, CO;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	DH = atoi(argv[1]);
	if (DH < 0)
	{
		printf("0\n");
		return (0);
	}
	CO = 0;
	CO += DH / 25;
	DH %= 25;
	CO += DH / 10;
	DH %= 10;
	CO += DH / 5;
	DH %= 5;
	CO += DH / 2;
	DH %= 2;
	CO += DH;
	printf("%d\n", CO);
	return (0);
}
