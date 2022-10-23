#include <stdio.h>
/**
 * main - entry point
 *
 * Description: using the main function
 * this program prints "single digits in base 10
 * Return: always zero
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar('0' + i);
		i++;
	}
	putchar('\n');
	return (0);
}
