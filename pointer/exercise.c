#include <stdio.h>

/**
* modify_my_char_var - solve me
* @cc: char to modify
* @ccc: char to modify
* Return: nothing
*/

void modify_my_char_var(char *cc, char ccc)
{
	printf("Value of 'cc': %p\n", cc);
	printf("Address of 'cc': %p\n", &cc);
	printf("Value of 'ccc': %d\n", ccc);
	*cc = 'o';
	ccc = 'l';
}

/**
* main - solve me
* Return: 0
*/

int main(void)
{
	char c;
	char *p;

	p = &c;
	c = 'H';
	printf("Value of 'c'before the call: %d\n", c);
	printf("Address of 'c': %p\n", &c);
	printf("Value of 'p': %p\n", p);
	printf("Address of 'p': %p\n", &p);
	modify_my_char_var(p, c);
	printf("Value of 'c' after the call: %d\n", c);
	return (0);
}
