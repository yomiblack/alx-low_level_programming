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

	n = (n % 10);

	if (n < 0)
		n = -n;

	_putchar(n + '0');

	_putchar('\n');

	return (n);
}
