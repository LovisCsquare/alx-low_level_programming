#include <stdio.h>
/**
 * main - Digital numbers of base 10 begining with 0
 * Return: 0
 */
int main(void)
{
	int i;

	i = 0;
	do {
		printf("%d", i);
		i++;
	} while (i < 10);
	printf("\n");
	return (0);
}
