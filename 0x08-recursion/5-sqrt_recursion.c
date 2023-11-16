#include "main.h"

/**
  * _sqrt_recursion - returns the natural square root of numbers
  * @n: number whose square root we will be returning
  *
  * Return: -1 if the number doen't have a natural square root
  * else return the square root
  */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
  * _sqrt - checks for the square root of number n
  * @n: number to be checked
  * @i: parameter used for testing
  *
  * Return: 1 if natural square root exists, else -1
  */
int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	else if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (_sqrt(n, i + 1));
}
