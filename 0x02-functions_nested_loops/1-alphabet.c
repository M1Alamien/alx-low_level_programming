#include "main.h"
/**
 * main - abc
 *
 * prints the alphabet
 * Return: always 
 */
void print_alphabet(void)
{
	char s[] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
}
int main(void)
{
	print_alphabet();
	_putchar('\n');
	return (0);
}
