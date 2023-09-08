#include <stdio.h>
/**
 * main -  prints all possible combinations of
 * two two-digit numbers.
 *
 *   prints all possible combinations of two
 *   two-digit numbers ranging from 00 to 99
 *   in ascending order only using putchar and
 *   loops.
 *   Return: always 0
 */
int main(void)
{
	int n1;
	int n2;

	for (n1 = 0; n1 < 100; n1++)
	{
		for (n2 = n1 + 1; n2 < 100; n2++)
		{
			putchar('0' + n1 / 10);
			putchar('0' + n1 % 10);
			putchar(' ');
			putchar('0' + n2 / 10);
			putchar('0' + n2 % 10);
			if (n1 != 98 || n2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
