#include "main.h"
/**
 * binary_to_uint - binary to u int
 * @b: a str of bin
 * Return: rs or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int k = 1, len = 0, result = 0;
	int i;

	if (!b)
		return (0);
	for (; b[len]; len++)
		;
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			result += k;
		k *= 2;
	}
	return (result);
}
