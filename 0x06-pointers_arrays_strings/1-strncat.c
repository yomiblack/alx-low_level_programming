#include "main.h"
/**
 * _strcat - function
 *
 * @dest: input value
 *
 * @src: input value
 *
 * @n: number of character to add to dest
 *
 * To concat two strings
 *
 * Return: pointer to resulting destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, int j;

	for (j = 0; dest[j] != '\0'; j++)
	{}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] =  '\0';

	return (dest);

}
{
	int i;
	int j;

	for (j = 0; dest[j] != '\0'; j++)
	{}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';

	return (dest);

}
