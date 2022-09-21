#include "main.h"
/**
 * _strncat - concatenate two strings but use n bytes
 * @dest: destination of string to be appended
 * @src: source of string to be completed
 * @n: integer to be checked
 *
 * Return: returns concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_Cat = 0;

	while (dest[index++])
		dest_Cat++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_Cat++] = src[index];

	return (dest);

}
