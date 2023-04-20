#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - ghadi nakhdam hnaa men talii ga3 chnuu y9ed  yatra
 * @argc: nmbr d les arg
 * @argv: pointer l kul arg
 * Return: ila kanat operation ghi char machi - + ... atkuun exit
 * 
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
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - sub function
 * @a: first integer
 * @b: secind integer
 * Return: result between a and b
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - mul function
 * @a: first integer
 * @b: secind integer
 * Return: result between a and b
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - div function
 * @a: first integer
 * @b: secind integer
 * Return: result between a and b
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - mod function
 * @a: first integer
 * @b: secind integer
 * Return: result between a and b
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};
	int i = 0;

	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}