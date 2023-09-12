#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>

/**
 *  *  * _putchar - writes the character c to stdout
 *   *   * @c: The character to print
 *    *    *
 *     *     * Return: On success 1.
 *      *      * On error, -1 is returned, and errno is set appropriately.
 *       *       */
int _putchar(char c);
void print_alphabet(void)
{
	char s[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
}
#endif
/**
 * main - abc
 *
 * prints the alphabet
 * Return: always 0
 */
int main(void)
{
	_putchar('\n');
	return (0);
}
