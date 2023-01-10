/*
 * File: 9-times_table.c
 * Auth: AhmedNagm
 */

#include "main.h"

/**
 * times_table - prints multiplication table till 9 followed by , and   .
 * Return: void.
 */

void times_table(void)
{

	int row;
	int col;
	int prod;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');

		for (col = 1; col <= 9; col++)
		{

			prod = col * row;

			_putchar(',');

			_putchar(' ');

			if (prod <= 9)
			{
				_putchar(' ');
				_putchar(prod + '0');
			}
			else
			{
				_putchar(prod / 10 + '0');
				_putchar(prod % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
