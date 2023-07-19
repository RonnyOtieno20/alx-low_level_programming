#include "main.h"

/**
 * times_table - print the 9 times table, starting with 0.
 */

void times_table(void)
{
	int i, j, result = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');

				if (result < 10)
				{
					_putchar(' ');
				}
			}
			if (result < 10)
			{
				_putchar(result + 48);
			}
			else
			{
				_putchar((result / 10) + 48);
				_putchar((result % 10) + 48);
			}
		}

		_putchar('\n');
	}
}
