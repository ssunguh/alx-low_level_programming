#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	letter = 'a' - 32;
	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
