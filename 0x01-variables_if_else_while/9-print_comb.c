#include <stdio.h>
/**
 * main - The combination of numbers in ascending order
 * Return: 0
 */
int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		putchar((i % 10) + '0');
		i++;
		if (i == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
