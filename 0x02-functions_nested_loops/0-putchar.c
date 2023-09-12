#include "main.h"
/**
 * main - output
 *
 * output is _putchar
 * Return: 0 always
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main(void)
{
	char s[] = "_putchar";
	int i;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
	return (0);
}
