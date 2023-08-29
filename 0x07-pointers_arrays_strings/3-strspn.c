#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: parameter which consists only bytes from accept
 * @accept: parameter found in s
 * Return: 0 or i
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; s[i] != accept[j] ; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (0);
}
