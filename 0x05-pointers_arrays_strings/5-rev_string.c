#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to a character
 * Return: no return
 */

void rev_string(char *s)
{
	int count = 0;
	char *first = &(s[0]);
	
	while (*s != '\0')
	{
		count++;
		s++;
	}
	count--;

	while (count >= 0)
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
	*s += '\0';
}
