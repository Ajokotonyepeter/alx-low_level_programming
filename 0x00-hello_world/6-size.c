#include <stdio.h>
/**
 * main - A program that prints description values
 * Return: 0 (successful)
 */
int main(void)
{
	char b;
	int c;
	long int d;
	long long int e;
	float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(e));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
