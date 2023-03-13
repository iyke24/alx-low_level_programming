#include <stdio.h>
#include "main.h"

/**
 * main - print number of arguments
 * @argc: argument counter
 * @argv: pointer to argument arrays
 * Return: 0 on succes
 */

int main(int argc, char *argv[] __attrubute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
