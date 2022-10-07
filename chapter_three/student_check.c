#include <stdio.h>

/**
 * main - to check for students' result
 * Return: 0
 */

int main(void)
{
	int passes = 0;
	int failures = 0;
	int student = 1;
	int result;

	while (student <= 10)
	{
		printf("Enter your result (1 = pass and 2 = fail): ");
		scanf("%i", &result);

		if (result == 1)
		{
			passes += 1;
		}
		else
			failures += 1;

		student++;
	}

	printf("The number of passes are: %i\n", passes);
	printf("The number of failures are: %i\n", failures);

	if (passes > 8)
	{
		printf("Bonus to instructor!\n");
	}

	return (0);
}
