#include <stdio>

/**
 * main - prints the lowcase alphabet in the reverse.
 * followed by a new line
 * Retun: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
