#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 *
 * Return: always 0
 */
int main(void)
{
	int j;
	unsigned long int k, l, next, sum;

	k = 1;
	l = 2;
	sum = 0;

	for (j = 1; j <= 33; ++j)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum = sum + k;
		}
		next = k + l;
		k = l;
		l = next;
	}

	printf("%lu\n", sum);

	return (0);
}
