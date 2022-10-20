#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;
	char lower_letter;

	d = 0;
	while (d < 10)
	{
		putchar('0' + d);
		d++;
	}

	for (lower_letter = 'a'; lower_letter <= 'f'; lower_letter++)
	{
		putchar(lower_letter);
	}
	putchar('\n');

	return (0);
}
