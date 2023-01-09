/*
 * File: 1-alphabet.c
 * Auth: Ahmed Nagm
 */

#include "main.h"

/**
  * print_alphabet - prints alphabet in lowercase.
  * return: always 0.
  */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
		}
		_putchar('\n');
		}
