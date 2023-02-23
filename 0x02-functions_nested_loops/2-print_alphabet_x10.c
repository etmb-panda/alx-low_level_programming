#include "main.h"
/**
 * print_alphabet_x10:start point
 *
 * followed by a new line
 * return 0 if successful
 */
void print_alphabet_x10(void)
{
	char letter = 'a';
	int i = 0;

	while (i < 10)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
	letter = 'a';
	_putchar('\n');
	i++;
	}
}
