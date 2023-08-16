#include "main.h"
/**
 * print_last_digit - printing the last digit
 * @n: The last digit
 * Return: Value of the last digit
 */
int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (i < 0)
	{
		i = i * -1;
	}
	_putchar(i + '0');
	return (i);
}
