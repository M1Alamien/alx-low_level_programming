#include "main.h"
/**
 * is_palindrome - name
 * @s: string from main
 *
 * returns 1 if a string is a palindrome and 0 if not
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
	return (comp(s, s +_strlen_recursion(s) - 1));
}
/**
 * comp - name
 * @s: pointer to 1st char in s
 * @t: pointer to last char in s
 *
 * compares chars to check if string is palindrome
 * Return: 0 or 1
 */
int comp(char *s, char *t)
{
	if (s >= t)
		return (1);

	else if (*s == *t)
		return (comp(s + 1, t - 1));
	return (0);
}
