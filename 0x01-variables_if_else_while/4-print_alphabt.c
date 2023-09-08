#include <stdio.h>
/**
 * main - abc without e&q
 *
 * outputs the alphabet using if in
 * a for loop to exclude e&q
 * Return: 0 always
 */
int main(void)
{
	char ch;
	for (ch ='a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
