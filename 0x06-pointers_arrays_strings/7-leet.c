#include "main.h"
/**
 * *leet - encodes a string into 1337
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * @s: the string to encode
 * Return: encoded string
 */

char *leet(char *s)
{
	int a = 0, b = 0, 1 = 5;
	char r[5] = {'A', 'E', 'O', 'T', 'L'};
	char n[5] = {'4', '3', '0', '7', '1'};

	while (s[a])
	{
		b = 0;

		while (b < 1)
		{
			if (s[a] == r[b] || s[a] - 32 == r[b])
			{
				s[a] = n[b];
			}

			b++;
		}

		a++;
	}
	return (s);
}
