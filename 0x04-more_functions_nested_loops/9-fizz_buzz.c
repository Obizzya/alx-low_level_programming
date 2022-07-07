#include <stdio.h>
#include "main.h"
/**
 * main - prints the numbers from 1 to 100
 * for multiples of three print Fizz
 * for the multiples of five print Buzz
 * Return: 0
 */

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", i)
		}
		if (i != 100)
		{
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
