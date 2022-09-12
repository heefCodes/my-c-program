#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - print random positive and negative numbers
 * Return: Always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if (n == 0)
	{
		printf("%d is zero", n);
	}
	else if (n < 0)
	{
		printf("%i is negative", n);
	}

	return (0);
}
