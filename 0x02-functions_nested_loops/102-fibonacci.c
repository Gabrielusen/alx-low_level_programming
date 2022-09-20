#include <stdio.h>
#include "main.h"
/**
 * main - print first 50 fibonacci
 *
 * Return: 0 always.
 */
int main(void)
{
	int i;
	long int a1, a2, fa;

	a1 = 1;
	a2 = 2;
	printf("%ld, %ld", a1, a2);
	for (i = 0; i < 48; i++)
	{
		fa = a1 +a2;
		printf(", %ld", fa);
		a1 = a2;
		a2 = fa;
	}
	printf("\n");
	return (0);
}
