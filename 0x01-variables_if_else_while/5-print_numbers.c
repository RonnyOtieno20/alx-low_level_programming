#include <stdio.h>
/**
 * main - Entry point.
 *
 * description - Print all numbers of base 10 starting from 0.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		printf("%d", n);
		n++;
	}

	printf("\n");

	return (0);
}
