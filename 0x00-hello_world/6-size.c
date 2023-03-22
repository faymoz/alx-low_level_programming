#include <stdio.h>
/**
 * main - A program that prints the size of various types on the computer
 *
 * Return: Always 0.
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

printf("Size of char: %lu byte(%)\n", (unsigned long)sizeof(a));
printf("Size of int: %lu byte(%)\n", (unsigned long)sizeof(b));
printf("Size of long int: %lu byte(%)\n", (unsigned long)sizeof(c));
printf("Size of long long int: %lu byte(%)\n", (unsigned long)sizeof(d));
printf("Size of float: %lu byte(%)\n", (unsigned long)sizeof(e));
return (0);
}
