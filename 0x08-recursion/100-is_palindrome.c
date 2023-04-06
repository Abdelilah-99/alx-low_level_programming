#include "main.h"
/**
 * _len - in this function we just calculate
 * th lenght
 * @s: with pointers and where they poited and every move
 * until the null valu the return get 0 and the rec will run
 * Return: 0 if we got null and then we return
 * every step and ading a nm 1
 */
int _len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _len(s + 1));
}
/**
 * _palindrome_check - here eo have 2 statement the first one
 * to know if they are equal in every step and why we sub 1
 * because of the null valu it take the last case so
 * we need last digit
 * @s: the string that we play with all the time
 * @len: the lenght of the string s
 * @cnt: conting from the 0 digit and if the count sup
 * than len / 2 that mean the string is palindrome
 * else if still low than len / 2 that mean there
 * is a digit not familiar
 * Return: 1 if cnt sup than len / 2 or 0 if cnt
 * less than len / 2 return the rec if the statement running
 */
int _palindrome_check(char *s, int len, int cnt)
{
	if (s[cnt] == s[len - 1 - cnt])
	{
		if (cnt < len / 2)
			return (_palindrome_check(s, len, cnt + 1));
		return (1);
	}
	return (0);
}
/**
 * is_palindrome - that it just lik centre d'appel
 * it return _palindrome_check to show the result
 * @s: the string
 * Return: the result
 */
int is_palindrome(char *s)
{
	int len;

	len = _len(s);
	return (_palindrome_check(s, len, 0));
}
