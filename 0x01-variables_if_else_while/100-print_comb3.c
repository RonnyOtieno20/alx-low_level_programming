#include <stdio.h>
/**
 * main - Entry point.
 *
 * description - print all possible different combinations of two digits.
 * numbers must be separated by comma followed by space
 * the two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * print only the smallest combinations of two digits
 * numbers should be printed in ascending order
 * you can only use putchar
 * you're not allowed to use any variable of type char
 *
 * Return: Always 0.
 */

int main(void)
{
	int i = 1;

	while (i <= 99)
	{
		int FirstDigit = i / 10;
		int SeconDigit = i % 10;

		if (FirstDigit < SeconDigit)
		{
			putchar(48 + FirstDigit);
			putchar(48 + SeconDigit);

			if (i != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}

		i++;
	}

	putchar('\n');

	return (0);
}
