#include "main.h"

/**
 * _memcpy - fncs that copies memory area
 * @dest: Destination to copy to
 * @src: Source to copy from
 * @n: n number of byte
 * Return: return pointer dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
