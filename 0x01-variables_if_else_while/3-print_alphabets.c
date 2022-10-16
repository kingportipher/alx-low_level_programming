#include <stdio.h>
/**
 * main - print alpha in lower case
 * Return: alwasys void
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		puchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
