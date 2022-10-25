#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to a character
 * Return: no return
 */

void rev_string(char *s)
{
	int count = 0;
	char *last = &(s[0]);

	while (*s != '\0')
	{
		count++;
		s++;
	}
	count--;
	s = last;

	char *temp;
	while (count >= 0)
	{
		if (temp == '\0')
		{
			temp = s[count];
		}
		else
		{
			temp += s[count];
		}
		count--;
	}

	_putchar('\n');
}
