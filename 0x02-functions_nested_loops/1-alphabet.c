#include "main.h"
/**
 * print_alphabet - print the alphabet in lowercase followed by a new line
 */

void print_alphabet(void)
{
	char i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
