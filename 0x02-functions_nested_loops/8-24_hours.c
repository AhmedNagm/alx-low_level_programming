/*
 * File: 7-print_last_digit.c
 * Auth: AhmedNagm
 */

#include "main.h"

/**
 * jack_bauer - prints the resembelnce of a timer in 24 series.
 * Return: the value of the last digit.
 */
void jack_bauer(void)
{
	int min, hr;

	for (hr = 0; hr <= 23; hr++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar(hr / 10 + '0');
			_putchar(hr % 10 + '0');
			_putchar(':');
			_putchar(min / 10 + '0');
			_putchar(min % 10 + '0');
			_putchar('\n');
		}
	}
}
