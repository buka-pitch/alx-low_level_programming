#include "main.h"

void print_to_98(int n)
{

	if (n > 98)
	{
		int i;
		for (i = n; i >= 98; i++)
		{
			_putchar(i);
			_putchar('\n');
		}
	}
	else 
	{
		int i;
		for (i = n; i <= 98; i++)
		{
			_putchar(i);
			_putchar('\n');
		}
	}
}
