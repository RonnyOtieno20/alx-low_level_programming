#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Pointer to the number.
 * @index: The index, starting from 0 of the bit to set.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/* Check if index is larger than the number of bits */
	if (index >= (sizeof(*n) * 8))
		return (-1);

	/* Create a mask with a 1 at the specified index */
	unsigned long int mask = 1UL << index;

	/* Set the bit at the specified index to 1 */
	*n |= mask;

	return (1);
}
