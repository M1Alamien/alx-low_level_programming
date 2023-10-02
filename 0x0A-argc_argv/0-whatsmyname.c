#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - name
 * @argc: int from command line
 * @argv[]: string from command line
 *
 * prints the name of the program
 * Return: always 0
 */
int main(int __attribute__((__unused__)) argc, char* argv[])
{
	printf("%s", argv[0]);
	return (0);
}
