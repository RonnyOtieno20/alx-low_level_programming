#include <unistd.h>

/**
 * main - Entry point
 * Write a string of text to standard output, without using
 * either printf or puts or any of their derivatives followed by
 * a new line, to the standard error.
 *
 * Return: 1
 */

int main(void)
{
	write(2,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}
