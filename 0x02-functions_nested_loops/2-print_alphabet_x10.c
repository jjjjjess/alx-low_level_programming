#include "main.h"

/**
 * void print_alphabet_x10(void) - entry point
 * Description: prints alphabet ten times in lowercase
 */


void print_alphabet_x10(void)
{
	int j, x;

	x = 0;

	while (x < 10)
	{

		for (j = 'a'; j <= 'z'; j++)
		{
			putchar(j);
		}

		x++;

		_putchar('\n');
	}
}

