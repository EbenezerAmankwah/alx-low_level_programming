#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: parameter which is the memory area
 * @b: parameter which is to be stored
 * @n: parameter which defines the number of bytes to be stored
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		s[i] = b;
	return (s);
}
