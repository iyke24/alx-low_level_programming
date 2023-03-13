#include <stdio.h>
#include "main.h"

/**
 * main - print all the arguments passed to it
 * @argc: argument counter
 * @argv: pointer to arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i = 0;
	while(i < argc)
		printf("%s\n", argv[i++]);

	return (0);
}
