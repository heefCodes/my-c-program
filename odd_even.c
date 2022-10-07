#include <stdio.h>

/**
 * main - print odd or even numbers
 * Return: 0
 */

int main(void)
{
	int num;

	printf("Enter an integer: ");
	scanf("%i", &num);

	if (num % 2 == 0)
	{
		printf("%i is an even number", num);
	}
	else
		printf("%i is an odd number", num);

	return (0);
}
