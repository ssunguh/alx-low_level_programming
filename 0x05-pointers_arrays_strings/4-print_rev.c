#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer to a character
 * Return: void
 */

void print_rev(char *s)
{
	int count = 0;
	char * temp = s[0];

	while (*s != '\0')
	{
		count++;
		s++;
	}
	count--;
	s = temp;
	
	while (count >= 0)
	{
		/*_putchar(*(s + count));*/
		_putchar(s[count]);
		count--;
	}
	_putchar('\n');
}
