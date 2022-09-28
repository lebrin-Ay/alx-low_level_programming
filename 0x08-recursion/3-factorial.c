#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: number to be used
 *
 * Return: the factorial of the number
 */
int factorial(int n)
{
	int f;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	f = factorial(n - 1);
	return (n * f);
}
