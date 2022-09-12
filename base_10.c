#include <stdio.h>

/**
 * main - print single digit numbers of base 10
 * Return: Always 0
 */

int main(void)
{
	int number = 0;

	while (number < 10)
	{
		printf("%d", number);
		number++;
	}

	return (0);
}
