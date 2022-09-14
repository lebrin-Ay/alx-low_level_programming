#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	int add = 2;
	long int a = 1;
	long int b = a + 1;
	long int c = a + b;

	printf("%ld, %ld, ", a, b);
	while (add < 50)
	{
		printf("%ld", c);
		add++;
		a = b;
		b = c;
		c = a + b;
		if (add < 50)
		{
			printf(",");
		}
	}
	printf("\n");
	return (0);
}
