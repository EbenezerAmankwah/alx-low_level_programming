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
	char *start = dest;

	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (start);
}
