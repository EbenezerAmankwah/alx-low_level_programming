#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 * @i: parameeter to be checked
 * Return: always -a or a
 */

int _abs(int i)
{
	if (i < 0)
		return (-i);
	else if (i >= 0)
	{
		return (i);
	}
	return (0);
}
