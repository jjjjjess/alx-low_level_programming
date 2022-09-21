#incldue "main.h"

/**
 * int _islower - entry point
 *
 * Description: 'checks for lowercase character'
 *
 * Return: Always success
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

