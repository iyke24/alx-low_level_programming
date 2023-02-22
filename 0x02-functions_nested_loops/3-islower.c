#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _islower - print 1 if lowercase else 0
 * Description: check the case of the parameter
 * @c: parameter variable to check the case
 * Return: 0 Or 1
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);

	putchar('\n');
}
