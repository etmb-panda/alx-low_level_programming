#include "main.h"

/**
 * _islower - starting
 * @c:is the character to look out for
 * * Return: Always 1 (success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else
	return (0);
}
