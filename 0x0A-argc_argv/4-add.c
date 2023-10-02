#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - name
 * @argc: int from cl
 * @argv: string from cl
 *
 * adds positive numbers
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum = sum + atoi(argv[i]);
			}
		}
	printf("%d\n", sum);
	}
	return (0);
}
