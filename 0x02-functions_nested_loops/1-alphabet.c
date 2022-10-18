#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercases
 */
void print_alphabet(void)
{
	char lowerCase;

	for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
		_putchar(lowerCase);

	_putchar('\n');
}
