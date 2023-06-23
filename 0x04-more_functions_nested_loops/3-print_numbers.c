#include "main.h"

/**
 * print_number - Print the number since 0 to 9
 * Return: always 0
 */

void print_number(void)
{

	int c;

	for (c = '0'; c <= '9'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}
