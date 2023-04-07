#include "main.h"
/**
 * _strncpy - easy easy
 * @dest: kk
 * @src: kj
 * @n: dd
 * Return: Returns dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0')
	{
		if (i == n)
		break;
		dest[i] = src[i];
		i++;
	}
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
