/*
 * File: 4-rev_array.c
 * Auth: Ahmed Nagm
 * Project: ALx
 */

#include "main.h"

/**
 * reverse_array - reverse a string.
 *
 * @a: array to be reversed.
 * @n: elements in the array.
 *
 * Return: void.
 */

void reverse_array(int *a, int n)

{
	int i = 0, temp = 0;

	n -= 1;

	while (i <= n)
	{
		temp = a[n];
		a[n--] = a[i];
		a[i++] = temp;
	}
}
