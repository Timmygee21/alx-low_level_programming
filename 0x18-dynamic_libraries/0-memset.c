#include "main.h"

/**
 * _memset - fncs that fills the memory with a constant byte
 * @s: pointer to check value b
 * @b: character to check
 * @n: n number of bytes
 * Return: return a pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);

}
