/*
 * File: 3-print_numbers.c
 * Auth: Ahmed Nagm
 */

#include "main.h"

/**
 * print_numbers - prints 0123456789\n
 *
 * Return: void
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}
