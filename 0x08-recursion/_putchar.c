#include <unistd.h>

/**
  * _putchar - print out a character to the std output
  * @c: character to print out
  *
  * Return: on Success 1, on error return -1
  * and appropriate errno is returned.
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
