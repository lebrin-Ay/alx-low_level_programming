#include <stdio.h>
#include <math.h>
/**
 * main - find and prints the largest prime factor
 *
 * Return: 0
 */
int main(void)
{
	unsigned int i = 2
	unsigned long n = 61285475143;

	while (i != 0)
	{
		if (n % i == 0)
		{
			n = n / i;
		}
		else
		{
			i++;
		}
	}
	printf("%lu\n", n);
	return (0);
}
