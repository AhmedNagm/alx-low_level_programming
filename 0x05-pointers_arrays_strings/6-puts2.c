/*
 * File: 6-puts2.c
 * Auth: Ahmed Nagm
 * Project: ALX
 */

#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: the string to be printerd.
 *
 * Return: void
 */

void puts2(char *str)
{
	int len;

	int index;

	for (len = 0; str[len] != '\0'; len++)
		;
	for (index = 0; index < len; index += 2)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
