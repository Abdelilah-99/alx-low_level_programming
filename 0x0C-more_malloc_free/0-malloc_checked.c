#include "main.h"

/**
 * malloc_checked - had lfunction ghady treturner les adresse ta3
 * 
 * malloc(b)
 * 
 * @b: size w sf
 * 
 * Return: adresse lii ghady ykuun f ptr
*/
void *malloc_checked(unsigned int b) {
    void *ptr = malloc(b);

    if (ptr == NULL)
        exit(98);
    return (ptr);
}
