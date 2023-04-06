#include "main.h"
/**
 * _pow_recursion - when y = 1 the recursion
 * will return 1 and it will be 5*1 next to 5*5
 * @x: if it 5
 * @y: if it 2
 * Return: -1 if y negative and 1 if it null and else if it positive
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
