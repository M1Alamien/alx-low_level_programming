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
		return (0);
	}
}
int main(void)
{
	void print_alphabet(void);
	_putchar('\n');
	return (0);
}
