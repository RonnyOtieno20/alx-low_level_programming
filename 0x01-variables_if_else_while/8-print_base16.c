#include <stdio.h>
/**
 * main - Entry point.
 *
 * description - Print all the numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 */

int main(void)
{
	int n = 0;

	while (n < 16)
	{
		if (n < 10)
		{
			putchar(48 + n);
		}
		else
		{
			putchar(97 + (n - 10));
		}
		n++;
	}
	putchar('\n');

	return (0);
}
