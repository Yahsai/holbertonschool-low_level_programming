#include <stdio.h>
#include <stdlib.h>
/**
 * *main - Entry point
 *@argc: argument counter
 *@argv: argument vector
 *Return: integer
 */

int main(int argc, char *argv[])
{

	int a, b, sum;

	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}

	else
	{
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	sum = a * b;

	printf("%d\n", sum);
	return (0);
	}

}
