#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry Point
 * @argc: arguments
 * @argv: array pointing to arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i=0; i  < argc; i++)
	{
		if(!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}

	printf("%d\n", sum);

	return (0);
}
