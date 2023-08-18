#include "main.h"

/**
 * _isdigit - fucntion that checks for a digit
 * @c: parameter to be checked
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
