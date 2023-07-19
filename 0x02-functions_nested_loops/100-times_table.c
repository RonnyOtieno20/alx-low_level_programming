#include "main.h"
/**
 * print_times_table - print the n times table starting with 0.
 * if n is greater than 15 or less than 0 the function should
 * not print anything.
 * @n: Integer whose times table we are printing
 */
void print_times_table(int n)
{
	int i, j, prod;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				prod = i * j;
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (prod < 10 && j != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((prod % 10) + 48);
				}
				else if (prod >= 10 && prod < 100)
				{
					_putchar(' ');
					_putchar((prod / 10) + 48);
					_putchar((prod % 10) + 48);
				}
				else if (prod >= 100 && prod != 0)
				{
					_putchar((prod / 100) + 48);
					_putchar((prod / 10 % 10) + 48);
					_putchar((prod % 10) + 48);
				}
				else
					_putchar((prod % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
