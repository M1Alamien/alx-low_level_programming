#include <stdio.h>

int main(void)
{
	int hex;
	char c;

	for (hex = 0; hex <= 9; hex++)
	{
		putchar('0' + hex);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
