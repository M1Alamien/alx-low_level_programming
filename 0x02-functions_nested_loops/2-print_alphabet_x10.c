#include "main.h"
/**
 * print_alphabet_x10 - abc x10
 *
 * print the aphabet 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	int x;
	char s[] = "abcdefghijklmnopqrstuvwxyz";

	for (x = 0; x < 10; x++)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		_putchar('\n');
	}
}
