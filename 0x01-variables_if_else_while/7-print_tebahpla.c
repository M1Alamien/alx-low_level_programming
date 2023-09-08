#include <stdio.h>
/**
 * main - alphabet in reverse
 *
 * outputs the alphabet in reverse
 * using an if loop
 * Return: always 0
 */
int main(void)
{
	char c = 'z';

	if (c >= 'a')
	{
		putchar(c);
		c++;
	} else
	{
		putchar('\n');
	}
	return (0);
}
