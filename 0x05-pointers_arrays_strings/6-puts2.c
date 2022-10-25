#include "main.h"

/**
 * puts2 - prints out even characters of a string
 * @str: pointer to a character
 * Return: no return
 */

void puts2(char *str)
{
	int count = 0;
	int i = 0;

	while (*str != '\0')
	{
		count++;
		str++;
	}

	while (i < count)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++; 
	}
	_putchar('\n');
}
