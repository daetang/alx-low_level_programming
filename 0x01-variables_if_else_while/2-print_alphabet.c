#include <stdio.h>
/**
 * main- Entry point
 *
 * Description: using the main function
 * this a program to "print lower case alphabet
 * Return: Always return 0
 */

int main(void)
{
	char Lc = 'a';

	while (Lc <= 'z')
	{
		putchar(Lc);
		Lc++;
	}
	putchar('\n');
	return (0);
}

