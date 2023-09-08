#include <stdio.h>
/**
 * main - 0 to 9
 *
 * prints 0 to 9 seperated by a space
 * and a comma
 * Return: always 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar('0' + n);
		if (n != 9)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
