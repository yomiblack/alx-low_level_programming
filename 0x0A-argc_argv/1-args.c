#include <stdio.h>
/**
 * main - function
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)*argv[];

	if (argc == 1)
	{
		putchar('0');
		putchar('\n');
	}
	else
	{
		printf("%i\n", argc - 1);
	}
	return (0);
}
