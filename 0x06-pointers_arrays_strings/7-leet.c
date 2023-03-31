#include <stdio.h>
/**
 * leet - nothing
 * @s: cool
 * Return: Returns p
 */
char *leet(char *s)
{
	char *p = s;
	int i, j;
	char l[] = "aAeEoOtTlL";
	char n[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; l[j] != '\0'; j++)
		{
			if (s[i] == l[j])
			{
				s[i] = n[j / 2];
				break;
			}
		}
	}
	return (p);
}
