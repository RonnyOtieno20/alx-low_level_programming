#include "variadic_functions.h"
/**
 * sum_them_all- returns the sum of all its parameters.
 * @n: Looping counter variable.
 *
 * Return:the sum of all the function parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list args;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	return (sum);
}
