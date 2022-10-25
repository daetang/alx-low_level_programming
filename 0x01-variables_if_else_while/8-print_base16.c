#include <stdio.h>
/**
 * main - entry point
 *
 * Description: using the main function
 * this is a program to "print all the numbers of base 16 in lowercase
 * Return: always zero
 */

int main(void)
{
	int i = 0;
	char Lc = 'a';

	while (i < 10)
	{
		putchar('0' + i);
		i++;
	}
	while (Lc <= 'f')
	{
		putchar(Lc);
		Lc++;
	}
	putchar('\n');
	return (0);
}

