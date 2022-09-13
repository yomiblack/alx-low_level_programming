#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	char a[];

	int i;

	a = "_putchar";

	for (i = 0; i < 8; i++)
{
		_putchar(a[i]);
}
	_putchar('\n');
	return (0);
}

