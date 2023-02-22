#include <stdio.h>
#include "main.h"

/**
 * _islower - print 1 if lowercase else 0
 * Description: check the case of the parameter
 * Return: 0 Or 1
 */
int _islower(int c)
{
	if(c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

	putchar('\n');
}
