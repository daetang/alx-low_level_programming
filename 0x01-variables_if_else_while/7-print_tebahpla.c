#include <stdio.h>
/**
 * main - entry point
 *
 * Description: using the main function
 * this program prints "the lowercase of the alphabet in reverse
 * Return: always zero
 */

int main(void)
{
	char Lc = 'z';

		while (Lc >= 'a')
		{
			putchar(Lc);
			Lc--;
		}
	putchar('\n');
	return (0);
}

