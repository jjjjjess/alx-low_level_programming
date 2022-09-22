#include "main.h"

/**
 * times_table -> prints 9 times table starting with 0.
 *
 * rw = row, col = column, d = digits
 *
 * Return: Always success
 */

void times_table(void)
{
	int rw, col, d;

	for (rw = 0; rw < 10; rw++)

	{

		for (col = 0; col < 10; col++)
		{
			d = rw * col;
			if (col == 0)
				_putchar(d + '0');
			if (col != 0 && d < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(d + '0');
			}

			else if (d >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((d / 10) + '0');
				_putchar((d % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
