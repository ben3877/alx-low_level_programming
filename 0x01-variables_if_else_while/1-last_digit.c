#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Prints a text according to number
 * Return: 0 (success)
 *
 */

int main(void)
{
	int n;

	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	m = n % 10;
	if (m > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	if (m == 0)
		printf("Last digit of %d is %d and is 0\n", m, n);
	if (m < 6 && m != 0)
		printf("Last digit od %d is %d and is less than 6 and not 0\n", m, n);
	return (0);
}
