#include <stdio.h>
#include <stdlib.h>

/**
*main - prints the minimum number of coins change for an amount of money
*@argc: number of arguments
*@argv: arguments vector
*Return: 0 or 1 if the number of arguments isn't 1
*/

int main(int argc, char **argv)
{
	int money, change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	if (money <= 0)
	{
		printf("%d\n", change);
		return (0);
	}
	if (money / 25 > 0)
	{
		change += money / 25;
		money %= 25;
	}
	if (money / 10 > 0)
	{
		change += money / 10;
		money %= 10;
	}
	if (money / 5 > 0)
	{
		change += money / 5;
		money %= 5;
	}
	if (money / 2 > 0)
	{
		change += money / 2;
		money %= 2;
	}
	if (money == 1)
		change += 1;
	printf("%d\n", change);
	return (0);
}
