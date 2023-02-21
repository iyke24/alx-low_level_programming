#include <stdio.h>
#include "main.h"

/*
 * print_alphabet -  function to print all the alphabet in lowercase
 */
void print_alphabet(void) //print all alphabets in lowercase

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
