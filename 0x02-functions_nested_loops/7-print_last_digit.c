#include "main.h"
/**
 * print_last_digit - prints the last digit
 * @n: the number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int lastDigit;
	lastDigit = n % 10;

	if (lastDigit < 0)
	{
		_putchar(-lastDigit + 48);
		return (-1);
	}
	else
	{
		_putchar(lastDigit + 48);
		return(1);
	}
}
