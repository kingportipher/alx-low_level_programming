#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10 times
 */
void print_alphabet_x10(void)
{
	int ten;
	char lowerCase;

	for (ten = 0; ten <= 9; ten++)
	{
		for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
			_putchar(lowerCase);
		_putchar('\n);
	}
}
