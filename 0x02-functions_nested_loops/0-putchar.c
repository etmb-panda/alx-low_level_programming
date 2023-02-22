#include "stdio.h"
/**
 * main - Start point
 *
 *
 *Return: 0 if successful
 */
int main(void)
{
	char put[8] = "_putchar";
	int i;
	for (i = 0; put[i]; i++)
{
	putchar(put[i]);
}
	putchar('\n');
	return (0);
}
