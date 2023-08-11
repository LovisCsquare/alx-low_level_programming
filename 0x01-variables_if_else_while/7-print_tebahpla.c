#include <stdio.h>
/**
 * main - The reverse order of alphabets
 * Return: 0
 */
int main(void)
{
	char alphabets;

	for (alphabets = 'z'; alphabets >= 'a'; alphabets--)

		putchar(alphabets);

	putchar('\n');

	return (0);
}
