#include <stdio.h>
/**
 * main - Entry point.
 *
 * Description - print the alphabet in lowercase except q & e.
 *
 * Return: Always 0.
 */

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a != 'q' && a != 'e')
		{
			putchar (a);
		}
		a++;
	}

	putchar ('\n');

	return (0);
}
