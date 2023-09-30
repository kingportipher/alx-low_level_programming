#include <stdio.h>
/**
 * main - print all arguments should be printed.
 * @argc: number of commandline argument.
 * @argv: array that contains the program commandline.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
