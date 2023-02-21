#include <stdio.h>
#include "main.h"

/*
 * print_alphabet -  function to print all the alphabet in lowercase
 * Description: 'the function uses while loop to print the alphabet'
 * Return : Always 0 (success)
 */

void print_alphabet(void)
{
	char alph;

	alph = 'a';

	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');
}
