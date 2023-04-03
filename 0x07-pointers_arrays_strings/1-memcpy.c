#include "main.h"
/**
 * *_memcpy - copie block of memori
 * @dest: yes it happen
 * @src: hjhj
 * @n: i don't know why i can solve the probleme
 * Return: dest 
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
