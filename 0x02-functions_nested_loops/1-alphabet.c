#include "main.h"
/**
 * main - function that prints letters of the alphabets in lowercase
 * Return: 0
 * 1-alphabet.c
 */
int print_alphabet(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
