#include "main.h"

/**
  * _strcat - functions that concatenates two strings
  * @dest: pointer to destination input
  * @src: pointer to source input
  * Return: Always 0.
  */

char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;
	/*find the size of dest array*/
	while (dest[c])
		c++;

	/* iterate through each src array value without the null byte*/
	for (c2 = 0; src[c2] ; c2++)
		/*append src[c2] to dest[c] while overwritting the null byte in dest*/
		dest[c++] = src[c2];

	return (dest);
}
