/*
 * File: 6-print_line.c
 * Auth: Ahmed Nagm
 */

#include "main.h"

/**
 * print_line - prints line n times.
 * @n: the n times.
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
