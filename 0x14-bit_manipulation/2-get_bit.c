#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number.
 * @index: The index, starting from 0 of the bit to get.
 *
 * Return: The value of the bit at index or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/* Check if index is larger than the number of bits */
	if (index >= (sizeof(n) * 8))
		return (-1);

	/* Shift n to the right by index and check the least significant bit */
	return ((n >> index) & 1);
}
