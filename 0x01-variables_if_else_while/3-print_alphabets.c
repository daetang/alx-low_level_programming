#include <stdio.h>
/**
 * main - entry point
 *
 * Description: using the main function
 * this is program "to print uppercase and lowercase alphabet
 * Return: 0
 */

int main(void)
{
	char Lc = 'a';
	char Uc = 'A';

	while (Lc <= 'z')
	{
		putchar(Lc);
		Lc++;
	}
	while (Uc <= 'Z')
	{
		putchar(Uc);
		Uc++;
	}
	putchar('\n');
	return (0);
}
