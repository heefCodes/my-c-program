#include <stdio.h>

/**
 * main - print alphabet in lowercase
 * Return: Always 0
 */

int main(void)
{
	char lower = 'a';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	putchar('\n');

	return (0);
}
