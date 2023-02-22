#include <stdio.h>
#include "main.h"

/**
 * print_sign - print + if greater than zero, 0 if zero and - if less than zero
 * Description: Check the sign of n
 * @n: the variable parameter
 * Return: +, 0 or -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
	return (1);
	}
	else if (n == 0)
	{
		putchar('0');
	return (0);
	}
	else
	{
		return (-1);
	}
}
