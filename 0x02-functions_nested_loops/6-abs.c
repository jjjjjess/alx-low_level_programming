#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @ab: input letter
 *
 * Return: Always success
 */

int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
