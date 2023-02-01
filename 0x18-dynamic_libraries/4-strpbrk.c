#include "main.h"

/**
 * _strpbrk - fns searches a string for any of a set of bytes
 * @s: string to check
 * @accept: character byte to search/check
 * Return: return pointer to the byte in , NULL if no byte
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')/* iterate thru strings */
	{
		for (j = 0; accept[j] != '\0'; j++)/* stop at first match */
		{
			if (s[i] == accept[j])
			{
				s = &s[i];/* pointer of first occurence */
				return (s);
			}
		}
		i++;
	}
	return (NULL);/* return NULL if no one matches */
}
