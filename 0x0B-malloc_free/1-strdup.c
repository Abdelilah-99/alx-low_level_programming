#include "main.h"
/**
 * _strdup - ma3arfch had lfunction chnu kadiri
 * wlkn lii faham b had l programme lii khdmt w bdaak
 * chii lii 3tawni drt programme lii yraja3 string
 * lii muhim machi hada lii drtt huwa khadiit 9ed mabaghi d memoire
 * b malloc function fhad string 3ndi 7 ta3 les daak chii
 * madartt f memoire
 * @str: hada huwa string lii jabtuu w raditu w ma3rfch 3lch
 * Return: ila kan oversize raah yrajja3 null hadii menn khassyt
 * d malloc zedt diik fnct 9bel return talya la7a9ach 3ndi lbreak
 * ghi fach ykuun string wssl l null ya3ni atab9ali
 * case khawya f srting li hya 7 w tmmk drt val null
 */
char *_strdup(char *str)
{
	char *T;
	int i = 0;
	int j = 0;

	if (str == NULL)
	return (NULL);
	while (str[j] != '\0')
	{
		j++;
	}
	T = malloc(sizeof(*T) * (j + 1));
	if (T == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		T[i] = str[i];
		i++;
	}
	T[i] = '\0';
	return (T);
}
