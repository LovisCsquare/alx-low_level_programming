#include <stdio.h>
/**
 * main - printing digital numbers of base 10 without using printf
 * Return: 0
 */
int main(void)
{
	int i;

	i = 0;
	do {
		putchar((i % 10) + '0');
		i++;
	} while (i < 10);
	putchar('\n');
	return (0);
}
