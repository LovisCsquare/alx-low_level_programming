#include "main.h"
/**
 * int_isalpha - Function checking alphabetic character
 * @c: The character to be verified
 * Return: 1 for success or 0 otherwise
 */
int _isapha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
