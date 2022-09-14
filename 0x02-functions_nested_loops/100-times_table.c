#include "main.h"
/**
 * print_times_table - main function
 * @n: integer to check
 */
void print_times_table(int n)
{
	int i;
	int j;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int operation = j * i;

				if (j == 0)
				{
					_putchar('0');
				} else if (operation <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + operation);
				} else if (operation > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + (operation / 100));
					_putchar('0' + ((operation / 10) % 10));
					_putchar('0' + (operation % 10));
				} else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (operation / 10));
					_putchar('0' + (operation % 10));
				}
			}
			_putchar('\n');
		}
	}
}
