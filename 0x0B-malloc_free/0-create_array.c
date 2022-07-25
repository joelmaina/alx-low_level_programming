#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storaged char
 *
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *d;
	unsigned int j;

	if (size == 0)
		return (NULL);

	d = malloc(sizeof(c) * size);

	if (d == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		d[j] = c;

	return (d);
}
