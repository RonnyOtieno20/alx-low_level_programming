#include <stdio.h>
/**
 * main - Entry point.
 *
 * description - print alphabets in lowercase, in reverse.
 *
 * Return: Always 0.
 */

int main(void)
{
	char z = 'z';

	while (z >= 'a')
	{
		putchar(z);
		z--;
	}

	putchar('\n');

	return (0);
}
