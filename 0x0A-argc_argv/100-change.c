#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints coins number
 * @argc: count
 * @argv: vector
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i, coin = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);

	if (i < 0)
	{
		printf("0\n");
		return (0);
	}

	while (i > 0)
	{
		if (i >= 25)
			i -= 25;
		else if (i >= 10)
			i -= 10;
		else if (i >= 5)
			i -= 5;
		else if (i >= 2)
			i -= 2;
		else if (i >= 1)
			i -= 1;
		coin += 1;
	}
	printf("%d\n", coin);
	return (0);
}
