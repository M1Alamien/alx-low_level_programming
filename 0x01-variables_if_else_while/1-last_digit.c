#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - prints last digit and compares
 *
 * compares the last digit of a long number
 * to see if it equals 0 or is greater than 5 
 * or less than 6 and prints the output
 * Return: 0 always
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	printf("Last digit of", " %d", n);
	printf(" is", " %d", last_digit);
	if (last_digit > 5)
	{
		printf(" and is greater than 5\n");
	} else if (last_digit == 0) 
	{
		printf(" and is 0\n");
	} else
	{
		printf(" is less than 6 and not 0\n");
	}
	return (0);
}
