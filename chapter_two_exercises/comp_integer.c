#include <stdio.h>

/**
 * main - comparing integers
 * Return: 0
 */

int main(void)
{
	int num1;
	int num2;

	printf("Enter two integers: ");
	scanf("%i", &num1);
	scanf("%i", &num2);

	if (num1 > num2)
	{
		printf("%i is larger", num1);
	}
	else if (num2 > num1)
	{
		printf("%i is larger", num2);
	}
	else if (num1 == num2)
	{
		printf("These numbers are equal.");
	}
	return (0);
}
