#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the character to be chacked
 * Return: 1 is c is the letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
