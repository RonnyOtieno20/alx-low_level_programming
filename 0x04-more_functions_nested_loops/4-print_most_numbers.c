#include "main.h"
/**
* print_most_numbers - prints the numbers from 0 to 9 followed by a newline.
* Description: Do not print 2 and 4. Only use _putchar twice in your code.
*
* Return: Nothing.
*/
void print_most_numbers(void)
{
	int num = '0';

	while (num <= '9')
	{
		if (!(num == '2' || num == '4'))
		{
			_putchar(num);
		}
		num++;
	}
}
