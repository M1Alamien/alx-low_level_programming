#include <stdio.h>
/**
 * main - 0 to 9
 *
 * outputs numbers 0 to 9 with certain
 * conditions to meet
 * Return: always 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar('0' + n);
	}
	putchar('\n');
	return (0);
}
