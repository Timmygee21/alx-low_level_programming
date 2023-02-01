#include "main.h"

/**
 * _strlen - function that returns the length of string
 * @s: integer to check length
 * Return: return Length of string
 */

int _strlen(char *s)
{
	int i; /* index of array */
	int len = 0; /* count the string */

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
