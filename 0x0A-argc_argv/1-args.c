#include <stdio.h>
/**
 * main - kkk
 * @argc: argc is for know how much parameter u add with the programme
 * @argv: cdw
 * Return: 0
 */
int main(int argc, char *argv[])
{
	while (*argv)
	{
		printf("%d\n", argc - 1);
		break;
	}
	return (0);
}
