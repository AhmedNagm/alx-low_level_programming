/*
 * File: 1-swap.c
 * Auth: Ahmed Nagm
 * Project: ALX
 */

#include "main.h"

/**
 * swap_int - swapped the value of 2 pointers
 * @a: integer to be swapped
 * @b: integer to be swapped with.
 *
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
