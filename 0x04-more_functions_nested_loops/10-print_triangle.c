#include "main.h"

/**
 * print_triangle - prints a triangle
 * @n: size of the triangle
 */
void print_triangle(int n)
{
	int h;
	int j;

	if (n > 0)
	{
		for (h = 1; h <= n; h++)
		{
			for (j = n - h; j > 0; j++)
				_putchar(' ');

			for (j = 0; j < h; j++)
				_putchar('#');

			if (h == n)
				contirnue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
