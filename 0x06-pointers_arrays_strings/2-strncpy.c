#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: parameter for containing the destination string
 * @src: parameter for the source string
 * @n: parameter for the number of characters to be copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
