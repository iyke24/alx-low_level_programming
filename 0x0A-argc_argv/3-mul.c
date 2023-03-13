#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - print the product of two numbers
 * @argc: argument counter
 * @argv: pointer to array argument
 * Return: 0 or 1 depending on the argument
 */

int main(int argc, char *argv[])
{
	if(argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1] * argv[2]);

				return (0);
				}
}
