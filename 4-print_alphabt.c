#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always returns 0 (Success)
 *
 */
int main(void)
{
	char i;

i	for (i = 'a'; i <= 'z' ; i++)
	{
		if (i == 'q' || i == 'e')
		{
			continue;
		}
		putchar(i);
	}
	putchar('\n');
	return (0);
}
