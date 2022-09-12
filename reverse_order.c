#include <stdio.h>

/**
 * main - print alphabet in reverse order
 * Return: Always 0
 */

int main(void)
{
	char lower = 'z';

	while (lower >= 'a')
	{
		putchar(lower);
		lower--;
	}
	putchar('\n');

	return (0);
}
