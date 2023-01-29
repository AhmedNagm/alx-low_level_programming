/*
 * File: 8-print_squre.c
 * Auth: Ahmed Nagm
 */

#include "main.h"

/**
 * print_square - prints the # sign to build a square.
 * @size: the size of the length and width of a squre.
 * Reture: void.
*/

void print_square(int size)
{
    int i, j;

    if (size <= 0)
        _putchar('\n');
    
    for (i = 0; i < size; i++)
    {
        for (j = 0; j <= size; j++)
        {
            _putchar('#');
        }
        _putchar('#');
        _putchar('\n');
    }
}