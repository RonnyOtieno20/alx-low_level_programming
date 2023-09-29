#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to the number.
 * @index: The index, starting from 0 of the bit to set.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* Check if index is larger than the number of bits */
	if (index >= (sizeof(*n) * 8))
		return (-1);

	/* Create a mask with a 0 at the specified index and 1s elsewhere */
	unsigned long int mask = ~(1UL << index);

	/* Set the bit at the specified index to 0 */
	*n &= mask;

	return (1);
}
