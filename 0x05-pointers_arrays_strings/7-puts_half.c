#include "main.h"

/**
 * puts_half - prints out the second half of a string
 * @str: pointer to a character
 * Return: no return
 */

void puts_half(char *str)
{
	int count = 0;
	int i = 0;
	char *first = str;

	while (*str != '\0')
	{
		count++;
		str++;
	}
	str = first;

	if (count % 2 == 0)
	{
		i = count / 2;
	}
	else
	{
		i = (count / 2) + 1;
	}

	while (i < count)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
