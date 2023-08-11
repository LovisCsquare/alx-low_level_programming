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
	do {
		putchar((i % 10) + '0');
		i++;
	} while (i < 10);

	for (string = 'a'; string <= 'f'; string++)
	{
		putchar(string);
	}

	putchar('\n');

	return (0);
}
