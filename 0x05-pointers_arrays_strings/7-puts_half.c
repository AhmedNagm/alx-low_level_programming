/*
 * File: 7-puts_half.c
 * Auth: Ahmed Nagm
 * Project: ALX
 */

#include "main.h"

/**
 * puts_half - prints the other half of a string
 * @str: the string to be printed
 *
 * Return: void
 */

void puts_half(char *str)
{
	int len, n, index;

	for (len = 0; str[len] != '\0'; len++)
		;
	if ((len % 2) == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len + 1) / 2;
	}

	for (index = n; index < len; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
