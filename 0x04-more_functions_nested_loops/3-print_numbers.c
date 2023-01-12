/*
 * File: 3-print_numbers.c
 * Auth: Ahmed Nagm
 */

#include "main.h"

/**
 * print_numbers - print numbers from 0 to 10.
 * 
 * Return: numbers from 0 to 9.
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
