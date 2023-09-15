#include <stdio.h>
/**
 * main - fizz buzz
 *
 * prints either fizz of buzz or both
 * or a number conditionally
 * Return: 0
 */
int main(void)
{
	int i;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz ");
		}
		else if (i % 5 == 0 && i % 3 == 0)
		{
			printf("Fizz Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	return (0);
}
