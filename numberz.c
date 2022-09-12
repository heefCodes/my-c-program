#include <stdio.h>

/**
 * main - print base 10 digit
 * Return: Always 0
 */

int main(void)
{
	int number = '0';

	while (number <= '9')
	{
		putchar(number);
		number++;
	}
	putchar('\n');

	return (0);
}
