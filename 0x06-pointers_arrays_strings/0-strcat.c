#include "main.h"
/**
 * _strcat - function
 *
 * @dest: input value
 *
 * @src: input value
 *
 * To concat two strings
 *
 * Return: pointer to resulting destination
 */
char *_strcat(char *dest, char *src)
{
	int i, int j;

	for (j = 0; dest[j] != '\0'; j++)
	{}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] =  '\0';

	return (dest);

}
