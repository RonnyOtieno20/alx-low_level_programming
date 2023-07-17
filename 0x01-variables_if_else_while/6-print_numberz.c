#include <stdio.h>
/**
 * main - Entry point.
 *
 * description - print all single digit numbers of base 10 using only putchar.
 *
 * Return: Always 0.
 */

int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}

	putchar('\n');

	return (0);
}
