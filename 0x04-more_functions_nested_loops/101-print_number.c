#include "main.h"
/**
* print_number - function that prints an integer.
* @n: integer number to print.
*
* Description: you can only use _putchar function to print. You are not
* to use long, you are not allowed to use arrays or pointers, you are not
* allowed to hard code special values.
*/
void print_number(int n)
{
	int last_digit;

	if (n < 0) /* handle negative numbers */
	{
		_putchar('-');
		n = -n;
	}

	if (n == 0)/* handle the case where n is 0 */
	{
		return;
	}
	last_digit = n % 10;
	print_number(n / 10);
	_putchar('0' + last_digit);
}
