#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to a character
 * Return: no return
 */

void rev_string(char *s)
{
	int count = 0;
	char *first = s;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	s = first + count;
	count--;

	while (*s == '\0' || count >= 0)
	{
		if (*s == '\0')
		{
			*s = *(first + count);
		}
		else
		{
			*s += *(first + count);
		}
		count--;
	}
}
