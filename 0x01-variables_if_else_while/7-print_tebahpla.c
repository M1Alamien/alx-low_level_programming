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
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
