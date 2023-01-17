/*
 * File: 100-times_table.c
 * Auth: AhmedNagm
 */

#include "main.h"

/**
 * times_table - prints multiplication table till 9 followed by , and   .
 * @n: the variable which will build the table around.
 * Return: void.
 */

void print_times_table(int n)
{

	int row;
	int col;
	int prod;

	for (row = 0; row <= n; row++)
	{
		_putchar('0');

		for (col = 1; col <= n; col++)
		{

			prod = col * row;

			_putchar(',');

			_putchar(' ');

			if (prod <= n)
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
