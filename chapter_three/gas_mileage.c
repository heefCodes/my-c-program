#include <stdio.h>

/**
 * main - to calculate miles per gallon used
 * Return: 0
 */

int main(void)
{
	float miles;
	float gallon;
	float miles_per_gallon;
	float total_miles = 0;
	float total_gallon = 0;
	int counter = 0;

	printf("Enter the miles driven:\n ");
	scanf("%f", &miles);
	printf("Enter the gallons used (-1 to end):\n ");
	scanf("%f", &gallon);

	while (gallon != -1)
	{
		total_miles = total_miles + miles;
		total_gallon = total_gallon + gallon;

		printf("Enter the miles driven:\n ");
		scanf("%f", &miles);
		printf("Enter the gallons used (-1 to end):\n ");
		scanf("%f", &gallon);


		miles_per_gallon = total_miles / total_gallon;

		printf("The overall average miles/gallon was %f ", miles_per_gallon);
	}

	return (0);
}

