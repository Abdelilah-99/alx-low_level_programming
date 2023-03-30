#include "main.h"
/**
 * *string_toupper - yes i did it
 * @k: thats my caracter
 * Return: Returns k
 */
char *string_toupper(char *k)
{
	int i = 0;

	while (k[i] != '\0')
	{
		if (k[i] >= 'a' && k[i] <= 'z')
			k[i] = k[i] - 32;
		i++;
	}
	return (k);
}
