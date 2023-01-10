/*
 * File: 11-print_to_98.c
 * Auth: AhmedNagm
 */

#include <stdio.h>

/**
 * print_to_98 - prints integers from and to 98.
 *@n:  number to start with
 * Return: void.
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)

			printf("%d, ", n--);

	printf("%d\n, ", n);
	}

	else
	{
		while (n < 98)

			printf("%d, ", n++);

	printf("%d\n, ", n);
	}
}
