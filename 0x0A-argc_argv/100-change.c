#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - name
 * @argc: int from cl
 * @argv: string from cl
 *
 * prints minimum number of coins to make change
 * for an amount of moeny
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int money, ch = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		if (atoi(argv[1]) < 0)
		{
			printf("0\n");
		}
		else
		{
			money = atoi(argv[1]);
			ch = changecalc(money);
			printf("%d\n", ch);
		}
	}
	return (0);
}
/**
 * changecalc - name
 * @money: int from main
 *
 * calculates amount of change needed
 * Return: ch
 */
int changecalc(int money)
{
	int ch = 0;

	while (money > 0)
	{
		if (money >= 25)
		{
			ch++;
			money -= 25;
		}
		else if (money < 25 && money >= 10)
		{
			ch++;
			money -= 10;
		}
		else if (money < 10 && money >= 5)
		{
			ch++;
			money -= 5;
		}
		else if (money < 5 && money >= 2)
		{
		ch++;
		money -= 2;
		}
		else if (money == 1)
		{
		ch++;
		money = 0;
		break;
		}
	}
	return (ch);
}
