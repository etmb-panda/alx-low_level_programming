#include <stdio.h>
/**
 * main - entry level
 *
 * Return: return 0 if successfull
 */
int main(void)
{
	char a;
	int b;
	long c;
	long long d;
	float e;
	printf("Size of a char is: %lu byte(s) \n", (sizeof(a)));
	printf("Size of an int is: %lu byte(s) \n", (sizeof(b)));
	printf("Size of a long int is: %lu byte(s) \n",(sizeof(c)));
	printf("Size of a long long int is: %lu byte(s) \n",(sizeof(d)));
	printf("Size of a float is: %lu byte(s) \n", (unsigned long)(sizeof(e)));
	return (0);
}
	
