#include <stdio.h>

/**
 * main - print sum of even numbers
 * Return: 0
 */

int main(void)
{
	int num = 2;
	int sum = 0;

	while (num <= 30)
	{
		sum += num;
		num += 2;
	/*	printf("The sum of even numbers between 2 and 30 is %i\n", sum);*/
	
	}
	printf("The sum is: %d", sum);

	return (0);
}
