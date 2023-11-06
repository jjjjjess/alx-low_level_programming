#include "main.h"
/**
 * _puts_recursion - is a function that prints a string followed by a new line.
 * @s: string
 * Return: void
 */

void _puts_recursion(char *s);
{
	if (*s != '\0')
	{

	_putchar(*s);
	_puts_recursion(s + 1); /* This is the recursive function */
	}
	else
	{
	_putchar('\n'); /* This prints a new line */
	}

}
