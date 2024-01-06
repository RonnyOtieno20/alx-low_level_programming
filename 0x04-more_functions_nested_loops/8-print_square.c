#include "main.h"
/**
* print_square - function that prints a square, followed by a newline.
* @size: the size of the square.
* Description: you can only use _putchar function to print,
* if size is 0 or less, the funtion should print only a newline,
* use the character # to print the square.
*/
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
