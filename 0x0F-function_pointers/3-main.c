#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - ghadi nakhdam hnaa men talii ga3 chnuu y9ed  yatra
 * @argc: nmbr d les arg
 * @argv: pointer l kul arg
 * Return: ila kanat operation ghi char machi - + ... atkuun exit
 */
int main(int argc, char *argv[])
{
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operation = get_op_func(argv[2]);
	if (!operation)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", operation(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
