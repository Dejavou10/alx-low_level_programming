#include <stdio.h>

/**
 *
 * main - main function
 *
 * Return: always 0
 */

{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	for (i = 'A' ; i <= 'Z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}