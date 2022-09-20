#include "main.h"

/**
 * _strlen - Write a function that returns the length of a string.
 *
 * @s: the variable pointer at s
 *
 * Return: Always return count
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
