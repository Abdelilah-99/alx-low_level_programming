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
int test2 = 1;

while (k[i] != '\0')
{
if (test2 && k[i] >= 'a' && k[i] <= 'z')
{
k[i] = k[i] - 32;
test2 = 0;
}
if (test == 1 && k[i] >= 'a' && k[i] <= 'z')
{
k[i] = k[i] - 32;
}
if (k[i] == ' ' || k[i] == ';' || k[i] == '.' || k[i] == ',' ||
k[i] == '!' || k[i] == '{' || k[i] == '}' || k[i] == '?' || k[i] == '"' ||
k[i] == ')' || k[i] == '(' || k[i] == 9 || k[i] == 10)
{
test = 1;
}
else
test = 0;
i++;
}
return (k);
}
