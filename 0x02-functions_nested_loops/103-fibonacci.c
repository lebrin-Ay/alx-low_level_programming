#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	int add = 0;
	long int a = 1;
	long int b = a;
	long int c = a + b;

	while (c < 4000000)
	{
		if (c % 2 == 0)
		{
			add += c;
		}
		a = b;
		b = c;
		c = a + b;
	}
	printf("%d\n", add);
	return (0);
}