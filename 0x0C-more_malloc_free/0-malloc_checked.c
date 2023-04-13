#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - Allocates memory using malloc
 * @b: The amount of memory to allocate
 *
 * Return: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
{
printf("Error: malloc failed\n");
exit(98);
}
return (ptr);
}
