#include "main.h"
/**
 * *_strchr - eee
 * @s: suu
 * @c: cuu
 * Return: s NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0' && *s != c)
	{
		s++;
	}
	if (*s == c)
		return (s);
	else
		return (NULL);
}
