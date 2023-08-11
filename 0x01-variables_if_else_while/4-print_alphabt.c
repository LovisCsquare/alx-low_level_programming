#include <stdio.h>
/**
 * main - printing the letters of the alphabet except q and e
 * Return: 0
 */
int main(void)
{
	char letters;

	letters = 'a';
	while(letters <= 'z')
	{
		if ((letters != 'e')  && (letters != 'q'))
			putchar(letters);
		letters++;
	}
	putchar('\n');
	return (0);
}
