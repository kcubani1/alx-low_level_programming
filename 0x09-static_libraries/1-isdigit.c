#include "main.h"

/**
 *_digit - checks if c is between 0 to 9
 * @c: input number
 * Return: 1 if (0-9), 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
