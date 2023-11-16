#include "main.h"

/**
  * _pow_recursion - return the power of a number
  * @x: number we are returning the power of
  * @y: the power we are raising the number to
  *
  * Return: -1 if the y is negative, otherwise return the power of the number.
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (x == 0)
		return (0);
	else
		return (x * _pow_recursion(x, y - 1));
}
