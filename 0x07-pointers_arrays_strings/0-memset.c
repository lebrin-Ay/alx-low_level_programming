#include "main.h"
/**
 * _memset - function that fills a memory block with a constant byte
 * @s: address to memoey block
 * @b: char to be used
 * @n: number of bytes
 *
 * Return: pointer to the memory block
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
