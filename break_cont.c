#include <stdio.h>

/**
 * main - using break and continue statement
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 1; x <= 10; x++)
	{
		if (x == 5)
		{
			break;
		}
		printf("%d ", x);
	}
	printf("Broke out of loop at x == %d\n", x);
	return (0);
}
