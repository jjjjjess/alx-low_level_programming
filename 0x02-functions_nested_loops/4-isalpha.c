#include "main.h"

/**
 * _isalpha - checks if the character is lowercase/uppercase and returns 1
 *
 * @c: is the character to be checked
 *
 * Return: 1 if lowercase or uppercase, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
