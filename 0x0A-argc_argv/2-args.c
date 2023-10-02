#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - name
 * @argc: int from cl
 * @argv: string from cl
 *
 * prints all arguments recieved
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
