#include <stdio.h>

/**
 * main - print shapes
 * Return: 0
 */

int main(void)
{
	 int count;
	 
	 for (count = 1; count <= 4; count++)
	 {
		 printf("********");

		 if (count != 2 && count != 3)
		 {
			 printf('*');
		 }
		 printf("********");
	 }
	 return (0);
}
