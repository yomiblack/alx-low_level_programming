#include "main.h"
/**
 * more_numbers - prints numbers 1-14 10 times
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int i = '0', j;

	while (i <= '9')
	{
		j = '0';
		while (j <= 14)
		{
			_putchar(j + '0');
			j++;
		}
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
