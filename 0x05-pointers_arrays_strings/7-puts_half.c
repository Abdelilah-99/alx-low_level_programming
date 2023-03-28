#include "main.h"
/**
 * puts_half - jii
 * @str: str
 */
void puts_half(char *str)
{
	int i = 0, n;

	while (str[i] != '\0')
		i++;
	if ((i + 1) % 2 != '0')
		n = (i - 1) / 2;
	else
		n = i / 2;
	n++;
	for (i = n; str[i] != '\0'; i++)
		putchar(str[i]);
	putchar('\n');
}
