#include <stdio.h>
/**
 * main - 0 to 9
 *
 * outputs 0 to 9 then a newline
 * Return: 0 always
 */
int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
