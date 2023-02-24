#include "main.h"

/**
 * print_line - print the character "_" n times to draw a line
 * @n: number of characters to draw
 */

void print_line(int n)
{
	int times;

	for (times = 0; times < n; times++)
	{
		if(times <=0)

		else
			_putchar('_');
	}

	_putchar('\n');
}
