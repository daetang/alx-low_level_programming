#include <stdio.h>
/**
 * main - entry point
 *
 * Description: using the main fucntion
 * this is a program to "print all possible combination of a single digit
 * Return: always zero
 */

int main(void)
{
	int i = 0;

		while (i <= 9)
		{
			putchar('0' + i);
			if (i < 9)
			{
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		putchar('\n');
		return (0);
}
