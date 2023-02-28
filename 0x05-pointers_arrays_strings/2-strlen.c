#include <string.h>
#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	char str;
	int len;
	str = *s;
       len = strlen(str);
	return (len);
}
