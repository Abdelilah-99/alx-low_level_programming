#include "main.h"
/**
 * *cap_string - i ve did it
 * @k: i can play
 * Return: Returns k
 */
char *cap_string(char *k)
{
int i = 0;
int test = 0;
int t[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

while (k[i] != '\0')
{
if (test == 1 && k[i] >= 'a' && k[i] <= 'z')
{
k[i] = k[i] - 32;
}
if (k[i] == *t)
{
test = 1;
}
else
test = 0;
i++;
}
return (k);
}
