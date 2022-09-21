#include "main.h"
/**
 * _strcat - concats two arrays
 * @dest: destination
 * @src: source
 *
 * Return: char value
 */
char *_strcat(char *dest, char *src)
{
	int index = 0;
	int dest_Cat = 0;

	while (dest[index++])
		dest_Cat++;

	for (index = 0; src[index]; index++)
		dest[dest_Cat] = src[index];

	return (dest);
}
