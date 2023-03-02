#include "main.h"

/**
 * _abs - returns absolute value of integer
 *
 * @a: parameter to be checked
 *
 * Return: Always a
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);

	else
		a = a;
	return (a);
}
