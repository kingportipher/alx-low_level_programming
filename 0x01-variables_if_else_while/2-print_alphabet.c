#include <stdio.h>

/**
 * main - prints alpha in lower case
 * Return - Always void
 */
int main(void)
{
	char lowerCase;

	for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
	{
		putchar(lowerCase);
	}
	putchar('\n');
	return (0);
}
