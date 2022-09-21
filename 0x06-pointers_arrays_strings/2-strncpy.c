#include "main.h"
/**
 * _strncpy - function to copy a string
 * @dest: storing the string
 * @src: source string
 * @n: maximum number of byte copied
 *
 * Return: returns the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	retrun(dest);
}
