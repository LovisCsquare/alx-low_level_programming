#include "main.h"
/**
 * times_table - Function tha prints the 9 times table
 * Return: The 9 times table
 */
void times_table(void)
{
	int i;
	int j;
	int k;

	i = 0;
	while (i < 10)
	{
		for (j = 0; j < 10; j++)
		{
			k = j * i;
			if (j == 0)
			{
				_putchar(k + '0');
			}
			if (k < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			else if (k >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
		}
		i++;
	}
	_putchar('\n');
}
