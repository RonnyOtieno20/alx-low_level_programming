
#include "main.h"

/**
* cap_string - capitalizes all words of a string
* @str: string to be capitalized
*
* Return: string
*/
char *cap_string(char *str)
{
	int i = 0;
	int j = 1;

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		str[i] == ',' || str[i] == ';' || str[i] == '.' || str[i]
		== '!' || str[i] == '?' || str[i] == '"' || str[i] == '('
		|| str[i] == ')' || (str[i] >= '0' && str[i] <= '9'))
		{
			j = 1;
		}
		else if (j == 1 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
			j = 0;
		}
		else
		{
			j = 0;
		}
		i++;
	}
	return (str);
}
