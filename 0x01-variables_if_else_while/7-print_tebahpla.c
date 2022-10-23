#include <stdio.h>
/**
 * Main - entry point
 *
 * Description: using the main function
 * this program prints "the lowercase of the alphabet in reverse
 * Return: always 0
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

