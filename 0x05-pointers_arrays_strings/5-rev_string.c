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
	s = first;

	char *temp = '\0';
	while (count >= 0)
	{
		if (temp == '\0')
		{
			temp = s[count];
		}
		else
		{
			*temp += s[count];
		}
		count--;
	}
}
