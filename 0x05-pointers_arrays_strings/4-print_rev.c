#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer to a character
 * Return: void
 */

void print_rev(char *s)
{
	int index = _strlen(s) - 1;

	while (index >= 0)
	{
		_putchar(*(s + index));
		index--;
	}
	_putchar('\n');
}
