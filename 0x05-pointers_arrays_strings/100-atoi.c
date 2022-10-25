#include "main.h"
#include <stdio.h>
/**
 * _atoi - converts a string to an integer
 * @s: pointer to a character
 * Return: pointer to a string of characters
 */

int _atoi(char *s)
{
	char *nums;
	int num, numcount = 0;

	while (*s != '\0')
	{
		if (*s > 47 && *s < 58)
		{
			numcount++;
			nums = s;
		}
		if (numcount && (*s <= 47 || *s >= 58))
		{
			int temp = numcount;

			while (temp)
			{
				int dig = *s - 48;

				if (numcount - temp)
				{
					int i = 0;

					for (; i < (numcount - temp); i++)
					{
						dig *= 10;
					}
				}
				num += dig;
				
				temp--;
				nums--;
			}
		}
		s++;
	}
}
