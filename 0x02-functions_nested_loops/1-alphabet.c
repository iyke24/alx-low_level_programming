#include <stdio.h>
#include "main.h"

/*
 * print_alphabet -  function to print all the alphabet in lowercase
 * Return : 0
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
