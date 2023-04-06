#include "main.h"
/**
 * nw_pm - in this function i checked if n is
 * primary or not other only math
 * @x: this is work when the number can devided
 * by other number for example 9 it devide by 2 but can
 * devide by 3 so 9 can devide by more than it self and
 * by 1 so in this case we say 9 is not primary
 * @y: y is n
 * Return: if 0 here we say n not primary otherwise if
 * it 1 is primary except 2
 */
int nw_pm(int x, int y)
{
	if (y < 2 || y % x == 0)
		return (0);
	if (x > y/2)
		return (1);
	return (nw_pm (x + 1, y));
}
/**
 * is_prime_number - here we check if only n is 2 caus
 * if it pass to the other function it s gonna be return 0
 * and that's wrong
 * @n: im not responsable for this
 * Return: it return 1 if n = 2 or return the result of the
 * function nw_pm
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (nw_pm(2, n));
}
