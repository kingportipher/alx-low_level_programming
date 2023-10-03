#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of characters
 * @size: an input for the size of the array
 * @c: store the string of character
 *
 * Return: a pointer to the base character c
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
