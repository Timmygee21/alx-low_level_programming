#include "main.h"

/**
 * *_strncpy - function that copies a string
 * @dest: destination string
 * @src: source string
 * @n: n of bytes
 * Return: return dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
