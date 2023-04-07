#include "main.h"
/**
 * _strncat - lklk
 * @dest: hl2
 * @src: tht
 * @n: it's
 * Return: Returns dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (j < n)
	{
		if (*(src + j) == '\0')
			break;
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	return (dest);
}
