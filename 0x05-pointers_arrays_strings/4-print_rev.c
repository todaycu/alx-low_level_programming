#include "main.h"
/**
 * print_rev - prints in reverse
 *
 *@s: integer variable
 *Return: Always 0.
 */
void print_rev(char *s)
{
	int count = 0;

	while (s[count])
	{
		count++;
	}

	count--;

	for (; count >= 0; count--)
	{
		_putchar(s[count]);
	}

	_putchar('\n');
}
