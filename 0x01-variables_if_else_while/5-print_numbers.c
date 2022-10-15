#include <stdio.h>

/**
 * main - The entry point for the program
 * Return: The exit code
 */
int main(void)
{
	char ch = '0';
	int i;

	for (i = 0; i < 10; i++)
		putchar(ch + i);
	putchar('\n');

	return (0);
}
