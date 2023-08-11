#include <stdio.h>
/**
 * main - Displaying the hexa decimal numbers (base 16)
 * Return: 0
 */
int main(void)
{
	int i;
	char string;

	i = 0;
	while (i < 10)
		putchar((i % 10) + '0');
	i++;

	for (string = 'A'; string <= 'F'; string++)
		putchar(string);

	putchar('\n');

	return 0;
}
