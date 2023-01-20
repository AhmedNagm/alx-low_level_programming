/*
 * File: 5-more_numbers.c
 * Auth: Ahmed Nagm
 */

#include "main.h"

/**
 * more_numbers - prints numbers from 1 - 14, 10 times
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, count;

	for (i = 1; i <= 10; i++)
	{
		for (count = 0; count < 15; count++)
		{
			if (count >= 10)
			_putchar('1');
			_putchar((count % 10) + '0');
		}
			_putchar('\n');
	}
	
}
