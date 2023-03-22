#include <stdio.h>
/**
 * main - A program that prints the size of various types on the computer
 * Return: 0 (success)
 */
int main(void)
{
printf("Size of char: %lu byte(s)\n", (long unsigned int)sizeof(char));
printf("Size of int: %lu byte(s)\n", (long unsigned int)sizeof(int));
printf("Size of long int: %lu byte(s)\n", (long unsigned int)sizeof(long int));
printf("Size of long long int: %lu byte(s)\n", (long unsigned int)sizeof(long long int));
printf("Size of float: %lu byte(s)\n", (long unsigned int)sizeof(float));
return (0);
}
