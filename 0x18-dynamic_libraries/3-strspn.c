#include "main.h"

/**
 * _strspn - fns that gets the length of a prefix substring
 * @s: string to check
 * @accept: character to check
 * Return: number of bytes in accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int matches = 0;

	for (i = 0; s[i] != '\0'; i++)/* iterate thru string */
	{
		for (j = 0; accept[j] != '\0'; j++)/* iterate thru target */
		{
			if (s[i] == accept[j])/* record and break at first match */
			{
				matches++;
				break;
			}
			if (accept[j + 1] == '\0' && s[i] != accept[j])
				return (matches);/* return if idx doesn'ty match */
		}
	}

	return (matches);/* return num if all match to the end */
}
