#include "main.h"
/**
 * _strchr - locates a character in a string
 * @c: occurance of the character
 * @s: in the string
 * Return: *s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}

	return (0);
}
