#include "main.h"
/**
 * _isalpha - to check for alphabetic character
 *
 * @c: The character is ASCII code
 *
 * Return: 1 if positive, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))

	{
		return (1);
	}

	else
		return (0);
}

