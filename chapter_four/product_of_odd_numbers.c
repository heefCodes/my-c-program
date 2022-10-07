#include <stdio.h>

/**
 * main - print the product odd numbers
 * Return: 0
 */

int main(void)
{
	int num = 1;
	int product = 1;

	while (num <= 15)
	{
		if ( num % 2 == 1)
		{
			product *= num;
		}
		printf("The product is %d\n", product);
		num++;
	}


	return (0);
}
