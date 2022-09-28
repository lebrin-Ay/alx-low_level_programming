#include "main.h"
/**
 * _strlen_recursion - calculates the lenght of a string
 * @s: string to be used
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s != '\0')
	{
		l++;
		l += _strlen_recursion(s + 1);
	}
	return (l);
}
