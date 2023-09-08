#include <stdio.h>
/**
 * main - the alphabet
 *
 * prints the alphabet in small cases using a for loop
 * Return: 0 always
 */
int main(void)
{
	char ch;

		for (ch = 'a', ch <= 'z', ch++)
		{
			putchar(ch);
		}
	return (0);
}
