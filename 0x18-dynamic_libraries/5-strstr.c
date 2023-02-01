#include "main.h"

/**
 * _strstr - fns that locates a substring
 * @haystack: string to check
 * @needle: substring to check
 * Return: return pointer to the substring or NULL otherwise
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, s;

	if (needle[0] == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)/* iterate through haystack */
	{
		/* if a byte matches first char of needle */
		/* iterate through needle until match ends */
		if (haystack[i] == needle[0])
		{
			s = i, j = 0;
			while (needle[j] != '\0')
			{
				if (haystack[s] == needle[j])
					s++, j++;
				else
					break;
			} /* if matched, return haystack back */
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}
	}
	return (NULL);/* No match */
}
