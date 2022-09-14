#include "main.h"
/**
 * times_table - times table function
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
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
				_putchar(operation + '0');
			} else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(operation / 10 + '0');
				_putchar(operation % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
