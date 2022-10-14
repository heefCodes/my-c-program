#include <stdio.h>

/**
* main - an array is not a pointer, but...
*Return: 0
*/

int main(void)
{
	int a[98];

	printf("a: %p\n", a);
	printf("&a[0]: %p\n", &a[0]);
	return (0);
}
