#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid passwords
 *
 * Return: always 0
 */
int main(void)
{
	int pass[100];
	int j, sum, m;

	sum = 0;	

	srand(time(NULL));

	for (j = 0; j < 100; j++)
	{
		pass[j] = rand() % 78;
		sum += (pass[j] + '0');
		putchar(pass[j] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			m = 2772 - sum - '0';
			sum += m;
			putchar(m + '0');
			break;
		}
	}

	return (0);
}
