/*
 * File: 1-isdigit.c
 * Auth: Ahmed Nagm
 */

#include "main.h"

/**
 * _isdigit - check if the number is between 0 - 9.
 * @c: the number to be checked.
 * Return: 1 if it's a digit or 0 otherwise.
 */

int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
}
