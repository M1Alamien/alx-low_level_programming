#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - to 98
 * @n: input from main
 *
 * print to 98 up or down
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
			else
			{
				printf("\n");
			}
		}
	}
	else if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
			else
			{
				printf("\n");
			}
		}
	}
	else
	{
		printf("98\n");
	}
}
