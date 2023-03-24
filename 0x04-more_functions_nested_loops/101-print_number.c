#include "main.h"
/**
 * print_number - thats lot of numbers
 * @n: the saw number
 */
void print_number(int n)
{
if (n >= 10 && n <= 99)
{
putchar((n / 10) + 48);
putchar((n % 10) + 48);
}
if (n >= 100 && n <= 999)
{
putchar((n / 100) + 48);
putchar((n % 100) / 10 + 48);
putchar((n % 10) + 48);
}
if (n >= 1000 && n <= 9999)
{
putchar((n / 1000) + 48);
putchar((n % 1000) / 100 + 48);
putchar(((n % 1000) % 100) / 10 + 48);
putchar((n % 10) + 48);
}
if (n == 0)
{
putchar(48);
}
if (n < 0)
{
putchar('-');
putchar((n / 10) * -1 + 48);
putchar((n % 10) * -1 + 48);
}
}
