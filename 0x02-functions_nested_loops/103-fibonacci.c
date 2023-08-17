#include <stdio.h>
/**
 * main - Fabonnaci sequence
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long int n, j = 1, k = 2, sum = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum =+ j;
		}
		n = j + k;
		j = k;
		k = n;
	}
	printf("%lu\n", sum);
	return (0);
}
