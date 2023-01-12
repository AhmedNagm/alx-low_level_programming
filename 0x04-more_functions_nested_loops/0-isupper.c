/*
 * File: 0-isupper.c
 *Auth: Ahmed Nagm
 */

#include "main.h"

/*
 *_isupper - check if the input is upper case or not.
 *@c: the charcter in question.
 *Return: 1 if upper 0 otherwise.
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
