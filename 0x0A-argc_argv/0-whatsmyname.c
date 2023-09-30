#include <stdio.h>
/**
 * main - a program that prints its name, followed by a new line
 * argc - number of commandline arguments.
 * @argv - array that contains commandline arguments
 *
 * Return: 0 on success
 */
int main(int agrc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
