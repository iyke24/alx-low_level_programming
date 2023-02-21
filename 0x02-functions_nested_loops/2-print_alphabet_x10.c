#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Print all the alphabet in lowercase 10 times
 * Description: It uses while nested loop to print the alphabet
 */
void print_alphabet_x10 (void)
{
	char alph;

	alph = 'a';

	int i;
	i = 0;

	while( i <= 9 )
	{
		while(alph <= 'z')
		{
		putchar(alph);
		alph++;
		putchar('\n');
	}
		i++;
}
