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
	int index;

	for (index = 0; s[index] != '\0'; index++)
		;
	for (index = index - 1; s[index] != '\0'; index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}
