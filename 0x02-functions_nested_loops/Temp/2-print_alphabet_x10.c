/*
 * File: 2-print_alphabet_x10.c
 * Auth: AhmedNagm
 */

#include "main.h"

/**
 * main - print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 * return: always 0.
 */
 
void print_alphabet_x10(void)
{
	int count = 0;
	char letter;

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
