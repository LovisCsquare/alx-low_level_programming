#include "main.h"
/**
 * void print_alphabet_x10 - function that prints 10 times the alphabet in lowercase
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int count = 0;
	int letter ;

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
			_putchar(10);
	}
}
