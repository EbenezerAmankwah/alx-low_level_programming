#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: value to be swapped
 * @b: value to be swapped with
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
