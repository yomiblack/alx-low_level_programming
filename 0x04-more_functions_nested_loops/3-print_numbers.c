#include "main.h"
/**
 * print_numbers - printer positive numbers from 0-9
 *
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	int i,
	    i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		i = i + 1;
	}
	putchar('\n');
}
