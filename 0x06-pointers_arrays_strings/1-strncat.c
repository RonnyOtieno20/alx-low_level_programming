#include "main.h"
/**
 * _strncat - concatenates the first n characters of src to dest, plus a '\0'
 * @dest: destination string
 * @src: source string
 * @n: number of bytes from src to be concatenated to dest
 * Return: a pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	while (i < n && src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}
