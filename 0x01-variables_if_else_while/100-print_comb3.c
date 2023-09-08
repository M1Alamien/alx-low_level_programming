#include <stdio.h>
/**
 * main - all possible different combinations of two digits.
 *
 * prints all possible different combinations of two digits
 * with numbers separated by , and a space after.
 * Only the smallest combos
 * using only putchar and loops
 * Return: always 0
 */
int main(void)
{
	int n1;
	int n2;

	for (n1 = 0; n1 <= 8; n1++)
	{
		for (n2 = 1; n2 <= 9; n2++)
		{
			if (n2 > n1)
			{
				putchar('0' + n1);
				putchar('0' + n2);
				if (n1 != 8 || n2 != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
