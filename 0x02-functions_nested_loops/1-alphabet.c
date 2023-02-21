#include <stdio.h>
#include "main.h"

/*
 * function to print all the alphabet in lowercase
 */
void print_alphabet(void)
{
	char alph;
	alph = 'a';
	while(alph <= 'z')
	{
		putchar(alph);
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
