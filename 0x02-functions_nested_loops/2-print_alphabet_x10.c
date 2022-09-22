#include "main.h"

/**
 * print_alphabet_x10 - entry point
 * Description: 'prints 10 times the alphabet in lowercase'
 * Return: always success
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

