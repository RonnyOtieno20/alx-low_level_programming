#include "main.h"

/**
  * factorial - returns the factorial of a number
  * @n: number whose factorial is to be returned
  *
  * Return: -1 if number is negative, 1 if number is 0
  */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
