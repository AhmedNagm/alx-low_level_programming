/*
 * File: 9-fizz_buzz.c
 * Auth: Ahmed Nagm
 */

#include <stdio.h>
#include "main.h"

/**
 * main - prints 1 to 100 replaceing divs of 3 to fizz 5 to buzz 3&5 fizzbuzz
 *
 * Return: always 0.
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
