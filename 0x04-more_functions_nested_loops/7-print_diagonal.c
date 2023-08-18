#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: the number of times the character should be printed
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;
		int k;

		for (i = 0 ; i <= n ; i++)
		{
			for (k = 0 ; k <= i ;k++)
			{
				if (k == i)
					_putchar('\\');
				else if (k < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
