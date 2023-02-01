#include "main.h"

/**
 * *_strncat - function that concatenate two strings
 * @dest: string to be appended to
 * @src: string to append
 * @n: n of bytes to append
 * Return: return dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != src[n])/*append replace null terminator*/
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
