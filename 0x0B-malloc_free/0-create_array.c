#include "main.h"

/**
 * create_array - had lprogramme kaychuf size wach equal l 0
 * muraha katchuuf wach kayan espace f la memoire ram
 * @size: ila kan 3andna ktarr men charachter kan7assbu ch7al
 * kayan mnuu w nadarbuuh f la taill ta3u bach ndiru espace
 * lii kafi l chnuuu bghina ndiir f la memoire ram
 * @c: chnuu kayan f T f l7alatt d i ghadi y installa f c
 *
 * Return: T and is c and c is H so it return Size x H
 */
char *create_array(unsigned int size, char c)
{
	char *T;
	unsigned int i;
	
	if (size == 0)
		return (NULL);
	T = malloc(sizeof(*T) * size);
	if (T == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		T[i] = c;
		i++;
	}
	return (T);
}
