#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: parameter to be checked
 * Return: -1 or 1 or factorial of n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
