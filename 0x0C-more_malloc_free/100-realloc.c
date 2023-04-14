#include "main.h"
/**
 * _memcpy - function bach ncopie block of memory
 * @dest: block lii ghayakhud
 * @src: lii ghadi na99al mnu
 * @n: t9ed tkuun new wlla old
 * Return: dest
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
/**
 * _realloc - had lfunction bach na99al w7d block memoire men wa7da lii ghadii
 * tiir muur manssali khdmty
 * @ptr: hadi pointer d old size blocks
 * @old_size: block lii ghadi na99allha
 * @new_size: block lii ghadi nakhl9ha
 * Return: ila knt new size dellocated y3ni mknch asslan block aykun
 * return NULL 7it makaynch memoire jdida ptr free ila kntt ptr NULL
 * ya3ni deja makaynch memoire allocated fhad l7ala ghadi nkhdem b memoire
 * jdida w nreturner l pointer jdida d new size ila knt new ptr w ptr
 * equal nrajja3 ghii ptr ila knt old size sgherr men new size
 * ya3ni les block d new ktrr men mn old ghadi na9all les block dyawli
 * 3adi ila kan l3ekss ghadi nkopi ghi nmbre d block d memorie d new
 *
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}
	if (old_size == new_size)
		return (ptr);
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	if (new_size > old_size)
		_memcpy(new_ptr, ptr, old_size);
	if (old_size > new_size)
		_memcpy(new_ptr, ptr, new_size);
	free(ptr);
	return (new_ptr);
}
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
    char *p;
    int i;

    p = malloc(sizeof(char) * 10);
    p = _realloc(p, sizeof(char) * 10, sizeof(char) * 98);
    i = 0;
    while (i < 98)
    {
        p[i++] = 98;
    }
    simple_print_buffer(p, 98);
    free(p);
    return (0);
}
