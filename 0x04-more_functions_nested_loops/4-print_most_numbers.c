#include "main.h"
/**
 * print_most_numbers - printer positive numbers from 0-9
 * except 2 and 4
 *
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	int i;
	    i = '0';

	while (i <= '9')
	{
		if (i == 2)
		{
			continue;
		}
		else if (i == 4)
		{
			continue;
		}

		_putchar(i);
		i = i + 1;
	}
	_putchar('\n');
}
