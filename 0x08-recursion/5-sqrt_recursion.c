#include "main.h"
/**
 * _nw_rc - here we just counted count to know
 * th number that can be upper than n
 * if it multiply by it self
 * @n: iiii
 * @count: jjjj
 * Return: count for know the number that could
 * be the chosen the last return is for when the sqrt
 * of number not natural
 */
int _nw_rc(int n, int count)
{
	if (count * count <= n)
	count = _nw_rc(n, count + 1);
		return (count);
}
/**
 * _sqrt_recursion - here we define lot of
 * things to know is the rst is a sqrt of n
 * and rst is a nature
 * Return: count for know the number that could
 * be the chosen the last return is for when the sqrt
 * of number not natural
 * @n: iiii
 */
int _sqrt_recursion(int n)
{
	int rst, count = 1;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	rst = _nw_rc(n, count) - 1;
	if (rst * rst == n)
		return (rst);
	else
		return (-1);
}
