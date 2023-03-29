#include "main.h"
/**
 * _atoi - that's make life easy with c simply it ignore every thing
 * not a integer but i ve made an exception for my baby - cause
 * she is everything to my code
 * @s: i've made an array without that i know
 * Return: Returns result
 */
int _atoi(char *s)
{
	int i = 0;
	int signe = 1;
	int check = 0;
	unsigned int result = 0;

	while (s[i])
	{
		if (s[i] == '-')
		{
			signe *= -1;
		}
		while (s[i] >= '0' && s[i] <= '9')
		{
			check = 1;
			result = (result * 10) + (s[i] - '0');
			i++;
		}
		if (check == 1)
		{
			break;
		}
		i++;
	}
	result *= signe;
	return (result);
}



/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int nb;

    nb = _atoi("-2147483648");
    printf("%d\n", nb);
    nb = _atoi("-402");
    printf("%d\n", nb);
    nb = _atoi("          ------++++++-----+++++--98");
    printf("%d\n", nb);
    nb = _atoi("214748364");
    printf("%d\n", nb);
    nb = _atoi("0");
    printf("%d\n", nb);
    nb = _atoi("Suite 402");
    printf("%d\n", nb);
    nb = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
    printf("%d\n", nb);
    nb = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
    printf("%d\n", nb);
    return (0);
}
