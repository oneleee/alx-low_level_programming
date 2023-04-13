#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _calloc - Allocates memory for an array, using malloc.
 * @nmemb: The number of elements in the array
 * @size: The size of each element in the array
 *
 * Return: A pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);
/* Set memory to zero */
memset(ptr, 0, nmemb * size);
return (ptr);
}
