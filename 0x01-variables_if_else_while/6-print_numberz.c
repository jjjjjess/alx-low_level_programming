#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single digit numbers of base 10, starting from 0
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{

		putchar(ch);
	}
	putchar(10);

	return (0);
}
