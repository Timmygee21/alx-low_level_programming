#include "main.h"

/**
 * _islower - Fns that checks for lowercase alphabets
 * @c: character to check
 * Return: return 1 if lower or 0 if upper
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
