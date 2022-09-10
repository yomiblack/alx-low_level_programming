#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (successful)
 */

int main(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		int j;

		for (j = i + 1; j < 10; j++)
		{
			putchar((i % 10) + '0');
			putchar((j % 10) + '0');

			if (i != 8)
			{
				putchar(',');
				putchar(' ');
			}
			else
				continue;
		}
	}
	putchar('\n');

	return (0);
}
