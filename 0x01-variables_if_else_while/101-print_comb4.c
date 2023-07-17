#include <stdio.h>
/**
 * main - Entry point.
 *
 * description - program that prints all possible
 * different combinations of three digits.
 * Numbers must be separated by ,, followed by a space
 * The three digits must be different
 * 012, 120, 102, 021, 201, 210 are considered the same combination
 * of the three digits 0, 1 and 2
 * Print only the smallest combination of three digits
 * Numbers should be printed in ascending order, with three digits
 * You can only use the putchar function
 * You can only use putchar six times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 *
 * Return: Always 0.
 */

int main(void)
{
	int i = 1;

	while (i <= 999)
	{
		int FirstDig = i / 100;
		int SeconDig = i / 10 % 10;
		int ThirdDig = i % 10;

		if (FirstDig < SeconDig && SeconDig < ThirdDig && FirstDig
		    != SeconDig && FirstDig != ThirdDig && SeconDig != ThirdDig)
		{
			putchar(FirstDig + '0');
			putchar(SeconDig + '0');
			putchar(ThirdDig + '0');

			if (i != 789)
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
