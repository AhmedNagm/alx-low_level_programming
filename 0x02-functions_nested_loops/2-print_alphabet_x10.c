/*
 * File: 2-print_alphabet_x10.c
 * Auth: Ahmed Nagm
 */

#include "main.h"

/**
  * print_alphabet_x10 - prints 10 times alphabet, in lowercase, followed by \n
  * return: always 0.
  */

void print_alphabet_x10(void)
{
	char letter;
	int counter = 0;

		while (counter < 10)
		{
			for (letter = 'a'; letter <= 'z'; letter++)
			{
				_putchar(letter);
			}
				_putchar('\n');
		counter++;
		}
}
