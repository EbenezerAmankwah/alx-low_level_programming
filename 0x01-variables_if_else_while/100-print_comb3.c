#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int i;
	int m;

	for (i = 48 ; i <= 56 ; i++)
	{
		for (m = 49 ; m <= 57 ; m++)
		{
			if (m > i)
			{
				putchar(i);
				putchar(m);
				if (i != 56 || m != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
