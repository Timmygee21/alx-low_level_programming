#include "main.h"

/**
 * _strcmp - function that can compare two strings
 * @s1: Destination string to be compared
 * @s2: source string to compare
 * Return: int that will tell the number of space
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
