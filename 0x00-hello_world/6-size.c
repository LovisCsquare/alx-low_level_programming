#include <stdio.h>
/**
 * main - The size of various types on the computer
 * Return: 0
 */
int main(void)
{
	printf("The size of a char: %i byte(s)\n", sizeof(char));
	printf("The size of an int: %i byte(s)\n", sizeof(int));
	printf("The size of long int: %i byte(s)\n", sizeof(long int));
	printf("The size of long long int: %i byte(s)\n", sizeof(long long int));
	printf("The size of float: %i byte(s)\n", sizeof(float));
	return 0;
}
