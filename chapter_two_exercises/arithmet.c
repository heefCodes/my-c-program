#include <stdio.h>

/**
 * main - program to inputs 3 different integers from the keyboard
 * Return: 0
 */

int main(void)
{
	int num1;
	int num2;
	int num3;
	int sum;
	int average;
	int product;
	int smallest;
	int largest;
	printf("Tnput three different integers: ");
	scanf("%i", &num1);
	scanf("%i", &num2);
	scanf("%i", &num3);

	sum = num1 + num2 + num3;
	average = (num1 + num2 + num3) / 3;
	product = num1 * num2 * num3;


	if (num1 < num2 < num3)
	{
		num2 = smallest;
		smallest = num3;
		num1 = smallest;
	}
	
	if (num1 > num2 > num3)
	{
		num2 = largest;
		largest = num3;
		num1 = largest;
	}

	printf("Sum is %i\n", sum);
	printf("Average is %i\n", average);
	printf("Product is %i\n", product);
	printf("Smallest is %i\n", smallest);
	printf("Largest is %i\n", largest);
}
