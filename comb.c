#include <stdio.h>

/**
 * main - combination of a single digit numbers
 * Return: Always 0
 */

int main(void)
{
	int number = '0';

	while (number <= '9')
	{
		putchar(number);
		putchar(',');
		putchar(' ');
		number++;
	}
	putchar('\n');

	return (0);
}
