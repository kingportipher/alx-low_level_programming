#include "main.h"

/**
 * print_square -prints a square
 * @size: size of the square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int length;
		int breadth;

		for (length = 0; length < size; lenghth++)
		{
			for (breadth = 0; breadth < size; breadth++)
			{
				_putchar('a');
			}
			_putchar('\n');
		}
	}
}
