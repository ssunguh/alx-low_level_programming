#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies one string into another 
 * @dest: pointer to a string of characters
 * @src: pointer to a string of characters
 * Return: pointer to a string of characters
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	
	return (dest);
}
