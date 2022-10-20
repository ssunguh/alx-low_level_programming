#include "main.h"
/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * r = row, col = column, res = current multiplication result
 * Return: times table
 */
void times_table(void)
{
	int r, col, res;

	for (r = 0; r <= 9; r++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (col = 1; col <= 9; col++)
		{
			res = (r * col);
			if ((res / 10) > 0)
			{
				_putchar((res / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((res % 10) + '0');

			if (col < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
