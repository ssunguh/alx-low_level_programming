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

	char *temp = s[count];
	int i = 0;

	s = first;
	while (--count >= 0)
	{
		*temp += s[i + count];
	}
	*temp += '\0';
}
