#include <stdio.h>

/**
 * main - print 1 to 10
 * Return: 0
 */

int main(void)
{
	int counter = 1;

	do {
		printf("%d ", counter);
	} while (++counter <= 10);

	return (0);
}
