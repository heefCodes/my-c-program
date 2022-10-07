#include <stdio.h>

int square(int x);

int main(void)
{
	int c;

	for (c = 1; c <= 10; c++)
	{
		printf("%d ", square(c));
	}
	printf("\n");
}

int square(int x)
{
	return x * x;
}
