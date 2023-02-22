#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _isalpha - check if c is alphabet, lower or uppercase
 * Description: the function returns 1 if true else 0
 * @c: the parameter variable
 * Return: 1 or 0 
 */
int _isalpha(int c)
{
	if (isalpha(c) || islower(c) || isupper(c))
	return (1);
	else
	return (0);
	putchar('\n');
}
