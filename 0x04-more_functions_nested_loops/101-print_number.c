#include "main.h"

/**
 * print_number - print number
 * @var: variable to be printed
 *
 * 
 * 
 *
 */
void print(unsigned int n);


void print_number(int i)
{
	if (i < 0)
	{
		_putchar('-');
		i = -i;
	}

	print(i);
}


void print(unsigned int n)
{
	if (n / 10)
		print(n / 10);
	_putchar('0' + n % 10);
}
