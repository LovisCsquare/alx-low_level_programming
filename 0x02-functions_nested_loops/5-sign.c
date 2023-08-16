#include "main.h"
/**
 * print_sign - absolute value of an integer
 * @n: The number to be verified
 * Return: 1 for positive, -1 for negative or 0 for otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
