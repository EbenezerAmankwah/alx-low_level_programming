#include <stdio.h>

/**
 * main - Lists all the natural numbers below 1024 (excluded)
 *        that are multiples of 3 or 5.
 *
 * Return: Always 0.
 */
int main(void)
{
	int j, sum = 0;

	for (j = 0; j < 1024; i++)
	{
		if ((j % 3) == 0 || (j % 5) == 0)
			sum += j;
	}

	printf("%d\n", sum);

	return (0);
}

