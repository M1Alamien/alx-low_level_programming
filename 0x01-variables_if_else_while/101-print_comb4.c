#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits.
 *
 * prints all possible different combinations of three digits
 * with numbers separated with , and a sapce after
 * printing only the smallest combos possible
 * using only putchar and loops
 * Return: always 0
 */
int main(void)
{
	int n1;
	int n2;
	int n3;

	for (n1 = 0; n1 <= 7; n1++)
	{
		for (n2 = 1; n2 <= 8; n2++)
		{
			for (n3 = 2; n3 <= 9; n3++)
			{
				if (n2 > n1 && n3 > n2)
				{
					putchar('0' + n1);
					putchar('0' + n2);
					putchar('0' + n3);
					if (n1 != 7 || n2 != 8 || n3 != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
