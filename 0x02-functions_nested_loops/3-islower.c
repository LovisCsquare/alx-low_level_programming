#include "main.h"
/**
 * _islower - Function that checks lowercase
 * @c: Characters to be verified
 * Return: 1 for lowercase or return 0 for otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
