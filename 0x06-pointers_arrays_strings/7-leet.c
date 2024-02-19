#include "main.h"

/**
* leet - encodes a string into 1337.
* Description: Letters 'a' and 'A' should be replaced by 4.
* Letters 'e' and 'E' should be replaced by 3.
* Letters 'o' and 'O' should be replaced by 0.
* Letters 't' and 'T' should be replaced by 7.
* Letters 'l' and 'L' should be replaced by 1.
* You can only use one if in your code.
* You can only use two loops in your code.
* You are not allowed to use switch.
* You are not allowed to use any ternary operation.
*
* @s: string
* Return: string
*/
char *leet(char *s)
{
	int i;
	int j;
	int k;

	char l[] = "oOlLeEaAtT";
	char e[] = "0011334477";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		k = 0;
		while (l[j] != '\0')
		{
			if (s[i] == l[j])
			{
				k = j;
				s[i] = e[k];
			}
			j++;
		}
		i++;
	}
	return (s);
}
