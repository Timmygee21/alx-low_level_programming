#include "main.h"

/**
 * _strchr - fncs that locates a character in a string
 * @s: character to interate/check
 * @c: character to check
 * Return: return c in s or NULL if char isn't found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)/* find Match */
		i++;

	if (s[i] == c)/* if match assign to address 8*/
		return (&s[i]);
	else
		return (NULL);
}
