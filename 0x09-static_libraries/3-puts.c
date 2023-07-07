#include "main.h"

/**
 * _puts - program prints a string to a stdout.
 * @str: the string to be printed.
 * _putchar print a new line
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
