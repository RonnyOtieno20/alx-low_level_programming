#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be converted to binary.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	char flag = 0;

	if (n == 0) /* Handle the special case where n is 0 */
	{
		_putchar('0');
		return;
	}

	mask = 1UL << (sizeof(n) * 8 - 1); /* Set the mask to the highest bit */

	while (mask)
	{
		if (n & mask)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag) /* Only print '0's after the first '1' has been
				  encountered */
		{
			_putchar('0');
		}
		mask >>= 1; /* Move the mask one bit to the right */
	}
}
