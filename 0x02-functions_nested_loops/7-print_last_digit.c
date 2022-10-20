#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @nld: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int num)
{
	int ld;

	ld = (num % 10);
    ld = _abs(ld);

	_putchar('0' + ld);
	return (ld);
}
