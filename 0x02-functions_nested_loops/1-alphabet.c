#include "main.h"

/**
 * Main: print_alphabet
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char alphabet;
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
}
