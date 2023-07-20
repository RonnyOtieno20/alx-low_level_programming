#include <stdio.h>

/**
 * print_fibonacci - print the first n fibonacci numbers.
 *
 * @n: the count of numbers to be printed
 */

void print_fibonacci(int n)
{
	unsigned long int a = 1, b = 2, c;
	int i;

	printf("%lu, ", a);
	printf("%lu, ", b);

	for (i = 3; i <= n; i++)
	{
		c = a + b;

		printf("%lu, ", c);

		a = b;
		b = c;
		if (i == n)
		{
			printf("%lu\n", c);
		}
	}
}

/**
 * main - entry point
 *
 * Return: Always 0.
 */

int main(void)
{
	print_fibonacci(98);

	return (0);
}
