#include <stdio.h>

/**
 * main - print diameter, circumference, and area of a circle
 * Return: 0
 */

int main(void)
{
	float radius;
	float diameter;
	float circumference;
	float area;

	printf("Enter a value for radius: ");
	scanf("%f", &radius);

	diameter = 2 * radius;
	circumference = 2 * 3.14159;
	area = 3.14159 * radius * radius;

	printf("Diameter is %.2f\n", diameter);
	printf("Circumference is %.2f\n", circumference);
	printf("Area is %.2f\n", area);

	return (0);


}
