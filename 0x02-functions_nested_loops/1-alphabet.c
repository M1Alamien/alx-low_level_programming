#include "main.h"
/**
 * main - abc
 * @c: char
 *
 * prints the alphabet
 * Return: always 0
 */
void print_alphabet(void)
{
	char s[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
