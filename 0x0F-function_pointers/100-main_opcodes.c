#include <stdio.h>
#include <stdlib.h>
/**
 * print_op - name
 * @op: &main
 * @c: int from main
 *
 * prints the opcodes of main
 * Return: void
 */
void print_op(char *op, int c)
{
	int i;

	for (i = 0; i < c; i++)
	{
		printf("%.2hhx", op[i]);
		if (i + 1 < n)
			printf(" ");
	}
	printf("\n");
}
/**
 * main - name
 * @argc: int from cl
 * @argv: char * from cl
 *
 * does checks and calls print_op
 * Return: 1 or 2 or 0
 */
int main(int argc, char *argv[])
{
	int c;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	c = atoi(argv[1]);
	if (c < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_op((char *)&main, c);
	return (0);
}

