#include "main.h"

/**
 * print_square - prints out squares
 * @size: size of square
 */

void print_square(int size)
{
	if (size == 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 0;

		while (i <= (size - 1))
		{
			_putchar(35);
			i++;
		}
		_putchar('\n');
	}
}