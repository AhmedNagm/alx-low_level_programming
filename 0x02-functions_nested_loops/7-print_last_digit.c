/*
 * File: 7-print_last_digit.c
 * Auth: AhmedNagm
 */

#include "main.h"

/**
 * print_last_digit - prints the last number.
 * @n: the number in question.
 * Return: the value of the last digit.
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
