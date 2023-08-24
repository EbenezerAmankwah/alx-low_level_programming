#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: parameter for the destination string
 * @src: parameter for the source string
 * @n: parameter for the number characters to be appended
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0 ; i < n && *src != '\0' ; i++)
	{
		dest[len + i] = *src;
		src++;
	}
	dest[len + i] = '\0';
	return (dest);
}
