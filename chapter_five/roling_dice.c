#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int counter;

	for (counter = 1; counter <= 20; counter++)
	{
		printf("%10d", 1 + (rand() % 6));

		if (counter % 5 == 0)
		{
			printf("\n");
		}
	}
	return (0);
}
