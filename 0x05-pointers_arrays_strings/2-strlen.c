#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: pointer to check the string
 * Return: void
 */

int _strlen(char *s)
{
	int i = 0;
	
	while (s[i])
		i++;

	return (i);
}
