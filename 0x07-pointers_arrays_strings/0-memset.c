#include "main.h"
/**
 * _memset - The _memset() function fills
 * The first n bytes of the memory area
 * pointed to by s with he contant byte b
 * @s: target
 * @b: constant type
 * @n: number of byte
 * Return: returns new value of target
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
