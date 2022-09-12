#include <stdio.h>

/**
 * main - print hexadecimal in lowercase
 * Return: Always 0
 */

int main(void)
{
	int number = '0';
	char letter = 'a';

	while (number <= '9')
	{
		putchar(number);
		number++;
	}
	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
