#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Print all the alphabet in lowercase 10 times
 * Description: It uses while nested loop to print the alphabet
 */
void print_alphabet_x10 (void)
{
	char alph;

	alph = 'a'

	for(i=0; i<=9; i++)
	{
		while(alph <= 'z')
		{
		putchar(alph);
		putchar('\n');
		alph++;
	}
}
