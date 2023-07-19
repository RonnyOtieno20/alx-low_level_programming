#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - write the character c to stdout
 * @c: character to be printed
 * Return: 1 if success.
 * print alphabet - print the alphabet in lowercase
 * print_alphabet_x10 - print 10 times the alphabet in lowercase
 * _islower - checks for lowercase character
 * _isalpha - checks for alphabetic character
 * print_sign - prints the sign of a number
 * _abs - computes the absolute value of an integer
 * print_last_digit - prints the last digit of a number
 *jack_bauer - prints every minute of the day of Jack BAuer,
 * starting from 00:00 to 23:59
 * times_table - prints the 9 times table, starting with 0
 * add - adds two integers and returns the result
 * print_to_98 - prints all natural numbers from n to 98
 * print_times_table - prints the n times table, starting with 0
 */

int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int);
int print_last_digit(int);
void jack_bauer(void);
void times_table(void);
int add(int, int);
void print_to_98(int n);
void print_times_table(int n);

#endif
