#include "main.h"
/**
 * _calloc - ghady ndiru mem w initializiwha b 0
 * malloc katkuun f mem ta3ha l garbedge
 * @nmemb: ghii ch7aal b merra
 * @size: had size normallement huwa size char
 * Return: p
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	return (NULL);
	p = malloc(nmemb * size);
	if (p == 0)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;
	return (p);
}
