#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated memory space
 * @str: string to be copied
 * Return: NULL in case of error.1-strdup.c
 * 1-strdup.c1-strdup.c1-strdup.c1-strdup.c
 */
char *_strdup(char *str)
{
	char *cpy;
	int index, len;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;

	cpy = malloc(sizeof(char) * (len + 1));

	if (cpy == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
	{
		cpy[index] = str[index];
	}

	cpy[len] = '\0';

	return (cpy);
}
