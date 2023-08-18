#include "main.h"

/**
 * print_diagonal - drawing a diagonal line
 * @n: number of times he characer is printed
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
					_putchar('\\');
				else if (j < i)
					_puthchar(' ');
			}
			_putchar('\n');
		}
	}
}
