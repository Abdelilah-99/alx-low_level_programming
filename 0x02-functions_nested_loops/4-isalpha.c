#include "main.h"
/**
 * _isalpha - f off
 * @i: borring
 * Return: 1 or 0
 */
int _isalpha(int i)
{
	if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'))
		return (1);
	else
		return (0);
}
