#include <stdio.h>
/**
 * main - a program that prints its name, followed by a new line
 * @argc: number of command-line arguments
 * @argv: array that contains command-line arguments
 *
 * Return: 0 on success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
