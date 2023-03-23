#include "main.h"
/**
 * print_times_table - tu
 * @n: ui
 */
void print_times_table(int n)
{
int i, j, s;

if (n >= 0 && n <= 15)
{
for (i = 0; i <= n; i++)
{
_putchar('0');
for (j = 0; j <= n; j++)
{
_putchar(',');
_putchar(' ');
s = i * j;
if (s <= 9)
_putchar(' ');
if (s <= 99)
_putchar(' ');
if (s >= 100)
{
_putchar((s / 100) + 48);
_putchar(((s / 10) % 10) + 48);
}
else if (s <= 99 && s >= 9)
{
_putchar((s / 10) + 48);
}
_putchar((s % 10) + 48);
}
_putchar(' ');
}
}
}
