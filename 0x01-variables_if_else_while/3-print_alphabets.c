#include <stdio.h>
/**
 * main - alphabet in both cases
 *
 * prints the alphabet in small cases then caps then \n
 * Return: 0 always
 */
int main(void)
{
	char ch;

	for(ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for(ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
