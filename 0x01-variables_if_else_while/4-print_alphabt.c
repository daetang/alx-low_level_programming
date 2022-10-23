#include <stdio.h>
/**
 * main - entry
 *
 * Description: using the main fucntion
 * this program prints "lowercase alphabet except q & e
 * Return: always 0
 */

int main(void)
{
	char Lc = 'a';

	while (Lc <= 'z')
	{
		if ((Lc != 'q' || Lc != 'e') && (Lc <= 'z'))
			putchar(Lc);
		Lc++;
	}
	putchar('\n');
	return (0);
}

