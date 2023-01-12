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
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
		}
	_putchar('\n');
}
