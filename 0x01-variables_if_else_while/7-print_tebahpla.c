#include <stdio.h>
/**
 * main - print the alphabets in reverse
 * Return: Always 0
 */
int main(void)
{
	char reverseCase;

	for (reverseCase = 'z'; reverseCase >= 'a'; reverseCase--)
		putchar(reverseCase);

	putchar('\n');

	return (0);
}
