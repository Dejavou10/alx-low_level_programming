#include <stdio.h>

/**
 * main - print all possible combination
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 100; i++)
	{
		if (i < j)
		{
			putchar((i / 10) + 48);
			putchar((i % 10) + 48);
			putchar(' ');
			putchar((j / 10) + 48);
			putchar((j % 10) + 48);
			if (i != 98 || j != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
