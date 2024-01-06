#include <stdio.h>
/**
* main - entry point
*
* Description: The prime factors of 1231952 are 2, 2, 2, 2, 37 and 2081.
* Write a program that finds and prints the largest prime factor of the number
* 612852475143, followed by a new line. Your program will be compiled by this:
* gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-prime_factor.c -o
* 100-prime_factor -lm
*
* Return: 0.
*/
int main(void)
{
	unsigned long int num = 612852475143;
	unsigned long int factor = 2;

	while (num > 1)
	{
		if (num % factor == 0)
			num /= factor;
		else
			factor++;
	}
	printf("%lu\n", factor);
	return (0);
}
