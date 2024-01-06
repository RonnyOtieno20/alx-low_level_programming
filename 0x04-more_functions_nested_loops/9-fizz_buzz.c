#include <stdio.h>
/**
* main - entry point for the function.
*
* Description: The "Fizz-Buzz test" is an interview question designed to help
* filter out the 99.5% of programming job candidates who can't seem to program
* their way out of a wet paper bag. Write a program that prints the numbers
* from 1 to 100, followed by a new line. But for multiples of three print Fizz
* instead of the number and for the multiples of five print Buzz. For numbers
* which are multiples of both three and five print FizzBuzz. Each number or
* word should be separated by a space.
*
* Return: Always 0.
*/
int main(void)
{
	int num = 1;

	while (num <= 100)
	{
		if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz");
		else if (num % 3 == 0)
			printf("Fizz ");
		else if (num % 5 == 0)
			printf("Buzz");
		else
			printf("%d", num);
		if (num != 100)
			printf(" ");
		num++;
	}
	printf("\n");
	return (0);
}
