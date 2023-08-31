#include "main.h"

int find_sqrt(int i, int r);
int _sqrt_recursion(int n);

/**
 * find_sqrt - returns the square root of natural numbers
 * @i: number to find the square root of
 * @r: the root to be checked
 * Return: the square root or -1
 */

int find_sqrt(int i, int r)
{
	if ((r * r) == i)
		return (r);
	if (r == i / 2)
		return (-1);
	return (find_sqrt(i, r + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: parameter to be checked
 * Return: square root of n or -1
 */

int _sqrt_recursion(int n)
{
	int r = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (find_sqrt(n, r));
}
