#include <stdio.h>
/**
 * main - Letters of the alphabets both in lowercase and uppercase
 * Return: 0
 */
int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
		putchar(letters);
	for (letters = 'A'; letters <= 'Z'; letters++)
		putchar(letters);
	putchar('\n');
	return (0);
}
