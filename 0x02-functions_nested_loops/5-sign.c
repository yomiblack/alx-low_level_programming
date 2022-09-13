#include "main.h"
/**
 * print_sign - main function
 *
 * @n: an ASCII character to compae with logic
 *
 * Return: 1 if number is positive, -1 if negative and 0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
		_putchar('+');
	return (1);

	else if (n < 0)
		_putchar('-');
	return (-1);

	else
		return (0);
}
