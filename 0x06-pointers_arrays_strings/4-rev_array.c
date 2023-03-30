#include "main.h"
/**
 * reverse_array - ko
 * @a: ki
 * @n: ku
 */
void reverse_array(int *a, int n)
{
	int i, j;

	i = 0;
	while (i < n--)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
		i++;
	}
}
