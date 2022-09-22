#include "main.h"

/**
 * put2 - prints every other character of a string
 * @str: is to input string.
 * Return: nothing
 */
void put2(char *str)
{
	int i;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
