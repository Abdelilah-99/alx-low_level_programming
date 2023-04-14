#include "main.h"
/**
 * str_len - here ghi kan7ssab len d i ,j
 * @str: hna dayar pointer l i j
 * Return: len d i j
 */

int str_len(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}

/**
 * concat_n - ghady najma3 biin 2 str w str 2 ghady ykuun fih
 * ghi n byte madam n < j
 * @s1: hnnaa dyr point l str best
 * @s2: same thing but diff str
 * @n: ch7all nakhud mn byte
 * Return: T ou Null if fail
 */

char *concat_n(char *s1, char *s2, unsigned int n)
{
	char *T;
	unsigned int i, j;

	i = str_len(s1);
	j = str_len(s2);
	T = malloc(sizeof(char) * (i + n + 1));
	if (T == NULL)
		return (NULL);
	i = 0;

	while (s1[i] != '\0')
	{
		T[i] = s1[i];
		i++;
	}
	j = 0;

	while (j < n)

	{
		T[i + j] = s2[j];
		j++;
	}
	T[i + j] = '\0';
	return (T);
}

/**
 * concat_str - hna ghady nakhud str kamal 7it n > j
 * @s1: best string
 * @s2: the rest
 * Return: T ou Null if fail
 */
char *concat_str(char *s1, char *s2)
{
	char *T;
	unsigned int i, j;

	i = str_len(s1);
	j = str_len(s2);
	T = malloc(sizeof(char) * (i + j + 1));

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
/**
 * string_nconcat - only bach n9ad les function
 * @s1: just the same
 * @s2: same
 * @n: byte number
 * Return: T ou Null if fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int j = 0;
	char *T;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	j = str_len(s2);
	if (n < j)
		T = concat_n(s1, s2, n);
	if (n >= j)
		T = concat_str(s1, s2);
	return (T);
}
