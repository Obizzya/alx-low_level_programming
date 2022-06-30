#include <stdio.h> 
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int ll;
	float d;
	
	printf("size of a char: %lu byte(s)\n", sizeof(c));
	printf("size of an int: %lu byte(s)\n", sizeof(i));
	printf("size of a long int: %lu byte(s)\n", sizeof(l));
	printf("sizeof a long long int: %lu byte(s)\n", sizeof(ll));
	printf("size of a float: %lu byte(s)\n", sizeof(d));

	return (0);
}
