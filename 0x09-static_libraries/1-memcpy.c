#include "main.h"

/**
 * _memcpy - function that fills memory with a constant byte
 * @dest: destination for copied bytes
 * @src: source for copied bytes
 * @n: number of bytes to copy
 * Return: pointer to the memory area dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
