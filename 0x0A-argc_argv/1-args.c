#include <stdio.h>
/**
 * main - prints the number of arguments passed into it.
 * @argc: number of commandline arguments.
 * @argv: array that contains the program commandline arg.
 *
 * Return: 0 on success
 */
int main(int argc, char **argv __attribute__ ((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
