#include <stdio.h>
#include <string.h>
/**
 * main - just a programme for listing and make nw line
 * @argc: thing on command line
 * @argv: it will show what on command line
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 1;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
