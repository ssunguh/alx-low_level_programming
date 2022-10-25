#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to a character
 * Return: no return
 */

void rev_string(char *s)
{
	int count = 0;
	int i = 0;
	char *first = s;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	count--;
	s = first;

	while (i < count)
	{
		char temp = s[count];

		s[count] = s[i];
		s[i] = temp;
		count--;
		i++;
	}
}
