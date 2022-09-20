#include <stdio.h>
#include "main.h"
/**
 *print_array - to print n element of an array of int.
 *@a: pointer.
 *@n: value.
 *Return: not.
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0 ; x < n; x++)
	{
		printf("%d", a[x]);
		if (x != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
