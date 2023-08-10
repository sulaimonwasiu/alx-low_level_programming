#include "main.h"

/**
 * _calloc - allocates memory for an array given number of elements and size
 * @nmemb: number of elements
 * @size: size of each element
 * Return: Null if error, else pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
		return (NULL);

	void *ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	unsigned char *byte_ptr = (unsigned char *)ptr;

	for (unsigned int i = 0; i < nmemb * size; i++)
		byte_ptr[i] = 0;
	return (ptr);
}
