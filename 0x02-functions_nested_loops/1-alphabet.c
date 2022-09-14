#include "main.h"

/**
 * print_alphabet - this function prints alphabets
 *
 * Description: the function above prints all aplhabets in lower case
 * Return: 0
 */
void print_alphabet(void)
{
	int c;

	for (c = 97; c <= 122; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
