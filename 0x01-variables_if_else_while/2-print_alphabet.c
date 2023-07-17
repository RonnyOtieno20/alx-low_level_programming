#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description - Print the alphabet in lowercase using only putchar.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
		putchar ('\n');

		return (0);
}
