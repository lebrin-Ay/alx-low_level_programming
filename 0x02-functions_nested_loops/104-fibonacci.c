#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	int add = 2;

	float a = 1;
	float b = a + 1;
	float c = a + b;

	printf("%.0f, ", a);
	printf("%.0f, ", b);
	while (add < 98)
	{
		add++;
		printf("%.0f", c);
		a = b;
		b = c;
		c = a + b;
		if (add < 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
