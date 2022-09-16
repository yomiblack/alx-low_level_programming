#include "main.h"
/**
 * more_numbers - prints numbers 1-14 10 times
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int i = 0, j;

	while (i <= 9)
	{
		j = 0;
		while (j <= 14)
		{
			if (j > 9)
			{
				_putchar(j / 10 + '0');
				j++;
			}
		}
		_putchar(i % 10 + '0');
		i++;
	}
	_putchar('\n');
}
