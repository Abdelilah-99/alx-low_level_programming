#include<stdio.h>
/**
 * main - printing alphabetique
 * Return: Returns 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	if (c == 'e' || c == 'q')
	{
	continue;
	}
	putchar(c);
	}
	putchar('\n');
	return (0);
}
