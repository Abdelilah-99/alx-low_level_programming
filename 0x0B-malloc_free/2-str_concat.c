#include "main.h"
/**
 * str_concat - hnaa kattarrtt le boucle 3aad khassnii n tawarr biha
 * lii drtt hna huwa jm3t 2 ta3 les string hna sara7a fakartt ghi f
 * l 7ulul d loop
 * @s1: buu
 * @s2: fuu
 * Return: return what malloc do
*/
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	char *T;

	if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	T = malloc(sizeof(*T) * (j + i + 1));
	if (T == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		T[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		T[i + j] = s2[j];
		j++;
	}
	T[i + j] = '\0';
	return (T);
}
