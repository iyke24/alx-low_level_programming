#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of Char: %zu byte(s)\n", sizeof(char));
	printf("Size of Int: %zu byte(s)\n", sizeof(int));
	printf("Size of Long Int:%zu byte(s)\n", sizeof(long int));
	printf("Size of Long long Int: %zu byte(s)", sizeof(long long int));
	printf("Size of Float: %zu byte(s)", sizeof(float));

	return (0);
}


