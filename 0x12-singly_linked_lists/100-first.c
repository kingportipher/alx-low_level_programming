#include <stdio.h>

void_attribute_((constructor)) hare(void);

/**
 * hare - Prints a string
 * before the main function is executed.
 */
void hare(void)
{
	printf("You're best! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
