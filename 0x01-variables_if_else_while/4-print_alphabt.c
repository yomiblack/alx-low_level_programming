#include <stdio.h>

/**
 * main - print alphabet in lowercase letters, except for e and q
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'e' && i != 'q')
		putchar(i);
	}
	putchar('\n');

	return (0);
}
