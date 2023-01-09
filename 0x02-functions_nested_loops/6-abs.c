/*
 * File: 6-abs.c
 * Auth: AhmedNagm
 */

#include "main.h"
#include <stdlib.h>

/**
 * _abs - prints the absolute value of an int.
 * @n: the charcter to be checked.
 * Return: always 1 if n is positive and 0 if 0 and 01 if negative.
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
