#include "main.h"

int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 * is_divisible - function that checks if a number is divisible
 * @num: the parameter to be checked
 * @div: the parameter as the divisor
 *
 * Return: 0 when divisible and 1 when not divisible
 */

int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}

/**
 * is_prime_number - function that checks if a number is a prime number
 * @n: parameter to be checked
 *
 * Return: 1 when a prime number and 0 when not a prime number
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (is_divisible(n, div));
}
