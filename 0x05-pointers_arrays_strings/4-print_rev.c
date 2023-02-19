/*
 * File: 4-print_rev.c
 * Auth: Ahmed Nagm
 * Project: ALX
 */
#include "main.h"

/**
 * print_rev - prints string in reverse.
 * @s: string to be reversed
 *
 * Return: void.
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	while (s[i] >= 0)
	{
		_putchar(s[i--]);
	}
	_putchar('\n');
}
