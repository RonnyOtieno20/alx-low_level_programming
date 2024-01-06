#include "main.h"
/**
* print_triangle - prints a triangle on the terminal followed by a newline.
* @size: the size of the triangle.
* Description: you can only use _putchar function, if size is 0 or less,
* the function should print only a new line. Use # to print the triangle.
*/
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar(' ');
		}
		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
