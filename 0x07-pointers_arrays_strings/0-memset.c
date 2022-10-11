#include "main.h"

/**
 * _memset - is a function that fills memory with a constant byte.
 * @s: a pointer to the memory area to be filled
 * @b: the character to fill the memory with
 * @n: the number of bytes to be filled
 *
 * Return: the memory area filled
 */

void char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

Return: (s);
}

