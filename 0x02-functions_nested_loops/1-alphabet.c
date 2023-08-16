#include "main.h"
/**
 * main - function that prints letters of the alphabets in lowercase
 * print_alphabet - print alphabet in lowercase
 * Return: Always 0
 */

Ioid print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
