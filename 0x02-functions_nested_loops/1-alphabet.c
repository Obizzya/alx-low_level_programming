#include "main.h"
/*
 * print_alphabet - prints alphabet in lowercase
 * Return: always 0
 */
void print_alphabet(void)
{
	int j;
	for (j = 'a'; j<= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
	return (0);
}
