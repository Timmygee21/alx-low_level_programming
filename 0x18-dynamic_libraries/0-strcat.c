#include "main.h"

/**
 * _strcat - Function that concatenates two strings
 * @dest: character array to check
 * @src: character array to check
 * Return: return dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != 0; ++i)
		continue;

	for (j = 0; src[j] != 0; ++j, ++i)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
