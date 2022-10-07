#include <stdio.h>
#include <math.h>

/**
 * main - calculating compound interest
 * Return: 0
 */

int main(void)
{
	double p = 1000.0;
	double r = 0.05;
	int n;
	double a;

	printf("%4c%20c\n", 'n', 'a');

	for (n = 1; n <= 10; n++)
	{
		a = p * pow(1.0 + r, n);

		printf("%4d%20.2f\n", n, a);
	}
	return (0);
}
