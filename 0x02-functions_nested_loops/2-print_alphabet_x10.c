#include "main.h"

/**
 * void print_alphabet_x10(void) - prints 10 times the alphabet in lowercase
 * return always success
 */


void print_alphabet_x10(void)
{
	int n, co;

	co = 0;

	while (co < 10)
	{

		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}

		co++;

		_putchar('\n');
	}
}

