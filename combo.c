#include <stdio.h>

/**
 * main - print combination ot two digits
 * Return: Always 0;
 */

int main(void)
{
	int number1;
	int number2;

	for (number1 = '0'; number1 < '9'; number1++)
	{
		for (number2 = (number1 + 1); number2 <= '9'; number2++)
		{
			putchar(number1);
			putchar(number2);
			if (!(number1 == '9' && number2 == '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
