#include <stdio.h>
/**
 * main - containing 2 parameter argc and argv by giving argv[0]
 * the output is the name of the programme
 * @argv: respiu
 * @argc: dfg
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
	printf("%s\n", argv[i]);
	i++;
	}
	return (0);
}

