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
long int longi;
long long int 1x2_i;
float f;
printf("size of a char: %lu byte(s) \n", (unsigned long)sizeof(c));
printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(longi));
printf("sizeof a long long int: %lubyte(s)\n", (unsigned long)sizeof(1X2_i));
printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));

return (0);
}
