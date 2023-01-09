/*
 * File: 5-sign.c
 * Auth: AhmedNagm
 */

#include "main.h"

/**
 * print_sign - checks for a positive or negative number.
 * @n: the charcter to be checked.
 * Return: always 1 if n is positive and 0 if 0 and 01 if negative.
 */

int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n < 0)
		return (-1);
	else 
		return (0);
}
