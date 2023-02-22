#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Print all the alphabet in lowercase 10 times
 * Description: It uses while nested loop to print the alphabet
 */
void print_alphabet_x10(void)
{
	int i = 1;

	char alph = 'a';

	while (i <= 10)
	{
		while (alph <= 'z')
		{
		putchar(alph);
		alpha++;
	}
		putchar('\n');
		i++;
}
}
