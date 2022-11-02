#include "main.h"

/**
 * _strlen_recrusion - Returns the lenght of a string.
 * @s: The string to be meausred
 * Return: The lengh of the string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _stlen_recursion(s + 1);
	}
	return (len);
}
