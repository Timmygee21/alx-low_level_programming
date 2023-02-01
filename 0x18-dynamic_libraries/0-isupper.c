#include "main.h"

/**
 * _isupper - Function that checks for uppercase character
 * @c: character to print
 * Return: return 1 for uppercase and 0 for lowercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
