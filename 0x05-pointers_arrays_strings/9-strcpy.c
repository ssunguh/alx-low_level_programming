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
	char *temp = dest;	
	dest = &(src[0]);

	/*while (*src != '\0')
	{
		src++;
		*dest += *src; 
	}*/

	return (dest);
}
