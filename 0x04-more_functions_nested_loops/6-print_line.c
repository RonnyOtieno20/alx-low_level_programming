#include "main.h"
/**
* print_line - draws a straight line in the terminal.
* @n: the number of times _ should be printed.
* Description: You can only use _putchar function to print.
* The line should end with a \n. If n is 0 or less, the function should
* only print \n
*/
void print_line(int n)
{
	int i = 0;

	while (i <= n)
	{
		if (n > 0)
			_putchar('_');
		i++;
	}
	_putchar('\n');
}
