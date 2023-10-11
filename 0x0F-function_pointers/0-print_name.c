#include "function_pointers.h"
/**
 * print_name - name
 * @name: string from main
 * @f: function from main
 *
 * prints a name
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
