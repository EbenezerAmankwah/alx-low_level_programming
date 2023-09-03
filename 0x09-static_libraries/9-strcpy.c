#include "main.h"

/**
 * char *_strcpy - copies the string pointed to by src, inluding null byte
 * @dest: copy to
 * @src: copy from
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int m = 0;
	int y = 0;

	while (*(src + m) != '\0')
	{
		m++;
	}
	for ( ; y < m ; y++)
	{
		dest[y] = src[y];
	}
	dest[m] = '\0';
	return (dest);
}
