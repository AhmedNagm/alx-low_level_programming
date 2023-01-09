/*
 * File: 4-isalpha.c
 * Auth: AhmedNagm
 */

#include "main.h"

/**
 * _isalpha - checks for alphabetic charcter.
 * @c: the charcter to be checked.
 * Return: always 1 if c is lowercase or uppercase and 0 if not.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c>= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
