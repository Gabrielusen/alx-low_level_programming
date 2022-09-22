#include "main.h"

/**
 * put2 - prints every other character of a string
 * @str: is to input string.
 * Return: nothing
 */
void put2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
