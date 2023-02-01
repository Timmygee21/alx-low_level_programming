#include "main.h"

/**
 * _strcpy - copy string src into string buffer dest
 * @dest: string buffer
 * @src: String source to be copied
 * Return: return dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (i >= 0)
	{
		*(dest + i) = *(src + i);
		if (*(src + i) == '\0')
			break;
		i++;
	}
	return (dest);
}
