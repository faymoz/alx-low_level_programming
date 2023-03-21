#include <stdio.h>
/**
 * main - A program that prints the size of various types on the computer
 * Return: 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

printf("size of char: %lu byte(%)\n", (unsigned long)sizeof(a));
printf("size of char: %lu byte(%)\n", (unsigned long)sizeof(b));
printf("size of char: %lu byte(%)\n", (unsigned long)sizeof(c));
printf("size of char: %lu byte(%)\n", (unsigned long)sizeof(d));
printf("size of char: %lu byte(%)\n", (unsigned long)sizeof(e));
return (0);
}
