#include "main.h"

/**
 * print_last_digit - prints the last digit of n
 *
 * @n: parameter to be checked
 *
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int i;

	i = n % 10;

	if (n < 0)
		i = -i;
	else
		i = i;
	return (i);
}
