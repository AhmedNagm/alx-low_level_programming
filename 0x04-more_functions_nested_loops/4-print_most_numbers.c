/*
 * File: 4-print_most_numbers.c
 */

#include "main.h"

/**
 * print_most_numebers - print numbers from 0 - 9 without 2 and 4.
 Return: always zero.
 *
 */

void print_most_numbers(void)
{
	int i;
	for (i = 0; i <=9; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
		}
		_putchar('\n');
}
