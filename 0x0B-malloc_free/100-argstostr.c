#include "main.h"
/**
 * argstostr - had lprogramme khdiit kuul arg w 3titu val b i w kull
 * carac 3nduu val j l9adya d len bach na7ssab ch7al kayan b char
 * w 3tiit nombre l malloc bach ta3tini mem
 * len 2 d espace f kull haja id 3titha index w f kull
 * index 3tiit char w id kat7arrak w fach j twssel lim d arg
 * ayakhraj mn loop w dir "\n muraha dziid bach dak id tkuun f arg
 * lii wraah
 * @ac: nmbre d arg
 * @av: cnt d arg
 * Return: result
*/
char *argstostr(int ac, char **av)
{
	int i, j, len = 0, id = 0;
	char *rs;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			len++;
		}
		len++;
	}
	rs = malloc(sizeof(char) * len - 1);
	if (rs == NULL)
	return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			rs[id] = av[i][j];
			id++;
		}
		rs[id] = '\n';
		id++;
	}
	return (rs);
}
