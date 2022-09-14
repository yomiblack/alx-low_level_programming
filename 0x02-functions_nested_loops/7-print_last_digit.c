#include "main.h"
/**
 * print_last_digit - main entry
 *
 * @n: is ASCII character
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int i;

	i = (n % 10);
	if (n < 0)
		n = -n;
	_putchar(i + '0');

	return (i);
}
