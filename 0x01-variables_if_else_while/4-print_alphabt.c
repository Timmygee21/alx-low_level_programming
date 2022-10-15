#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - The entry point for the program
 * Return: The exit code
 */
int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	printf("Last digit of %d is %d ", n, lastDigit);

	if (lastDigit > 5)
		puts("and is greater than 5");
	else if (lastDigit < 6 && lastDigit != 0)
		puts("and is less than 6 and not 0");
	else
		puts("and is 0");
	return (0);
}
