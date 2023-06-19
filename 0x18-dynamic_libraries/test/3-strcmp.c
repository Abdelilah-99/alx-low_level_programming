#include "main.h"
/**
 * _strcmp - just read the code
 * @s1: lk
 * @s2: llk
 * Return: Returns 0 if we got equality
 * returni Always when we got diff
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}
