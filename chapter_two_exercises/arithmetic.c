#include <stdio.h>

/**
 * main - program to do +, *, -, /, and %.
 * Return: 0 (success)
 */

int main(void)
{
	int num1;
	int num2;
	int sum;
	int multiplication;
	int subtraction;
	int division;
	int remainder;

	printf("Enter the first number\n ");
	scanf("%d", &num1);

	printf("Enter the second number\n ");
	scanf("%d", &num2);

	sum = num1 + num2;
	multiplication = num1 * num2;
	subtraction = num1 - num2;
	division = num1 / num2;
	remainder = num1 % num2;

	printf("The sum is %d\n", sum);
	printf("The multiplication is %d\n", multiplication);
	printf("The subtraction is %d\n", subtraction);
	printf("The division is %d\n", division);
	printf("The remainder is %d\n", remainder);

	return (0);



}
