#include "main.h"
/**
 * _isalpha - Function for alphabetic character
 * @c: Character verification
 * Return: 1 for alphabetic character or 0 otherwise
 */
int _isalpha(int c)
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
