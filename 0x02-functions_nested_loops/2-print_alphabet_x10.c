#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Print all the alphabet in lowercase 10 times
 * Description: It uses while nested loop to print the alphabet
 */
void print_alphabet_x10(void)
{
	int i = 1;

	char alph;

	while (i <= 10 )
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
		putchar(alph);
	}
		putchar('\n');
		i++;
}
}
