#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet 10 times in lowercase
 */

void print_alphabet_x10(void)
{
	char i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
	_putchar('\n');

	}
}
