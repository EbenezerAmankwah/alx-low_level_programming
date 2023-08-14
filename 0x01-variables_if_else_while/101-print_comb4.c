#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int a;
	int b;
	int c;

	for (a = 48 ; a < 56 ; a++)
	{
		for (b = 49 ; b < 57 ; b++)
		{
			for (c = 50 ; c < 58 ; c++)
			{
				if (c > b)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a != 55 || b != 56 || c != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
