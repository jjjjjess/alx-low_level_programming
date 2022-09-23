##include "main.h"

/**
 * print_number - Print an integer
 * @n: The integer to print
 * Return: void
 */

void print_number(int n)
{
	static unsigned int divider, num;
	int digit;

	if (n < 0)
	{
		_putchar('-');
		num = n * (-1);
	}

	else
	{
		num = n;
	}

	if (num >= 10)
	{
		divider = 10;
		while (divider <= num / 10)
		{
			divider *= 10;
		}
	}
	else
	{
		divider = 1;
	}
	while (divider >= 1)
	{
		digit = num / divider;
		num = num % divider;
		_putchar(digit + '0');
		divider /= 10;
	}
}
