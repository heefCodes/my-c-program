#include <stdio.h>

/**
 * main - print the sum of 1 to 100
 * Return: 0
 */

int main(void)
{
	int number;
	int sum;

	for (number = 1; number <= 100; number++)
	{
		sum += number;
	}
	printf("The sum is %d\n", sum);
	return (0);
}
