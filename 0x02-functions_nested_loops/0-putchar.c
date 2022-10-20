#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main (void)
{
	char *output = "_putchar\n";

	while (output)
	{
		_putchar(*output);
		output++;
	}
	return (0);
}
