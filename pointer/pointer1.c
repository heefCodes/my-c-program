#include <stdio.h>

/**
 * main - print address of a variable
 * Return: 0
 */

int main(void)
{
	int var1;
	char var2[10];

	printf("Address of var1 variable: %x\n", &var1);
	printf("Address of var2 variable: %x\n", &var2);
	return (0);
}
