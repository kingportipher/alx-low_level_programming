#include "main.h"
#include <unistd.h>

/**
 * _putchar writes the character to output
 * @c: The character to print
 * Return: on success 1
 * Error: -1 return
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
