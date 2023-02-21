#include <stdio.h>
#include "main.h"

/*
 * function to print all the alphabet in lowercase
 */
void print_alphabet(void)
{
	int i = "a";
	while(i <= "z")
	{
		putchar(i);
	}
	putchar('\n');
}

/*
 * main - Entry into the program
 * return: always 0 (Success)
 */

int main(void)
{
	print_alphabet();
	return (0);
}
