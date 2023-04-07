#include "main.h"
#include <unistd.h>
/**
 * _puts - this will print a string of caractere
 * @str: *str = &str or we can say that *str is lik array
 * and the bool while ill print it caracter
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
