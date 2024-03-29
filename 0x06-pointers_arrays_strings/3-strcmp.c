#include "main.h"
/**
* _strcmp - compares two strings and returns the difference
* @s1: first string
* @s2: second string
* Return: 0
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
