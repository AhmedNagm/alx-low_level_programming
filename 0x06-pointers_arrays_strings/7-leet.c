/*
 * File: 7-leet.c
 * Auth: Ahmed Nagm
 * Project: ALx
 */

#include "main.h"

/**
 * leet - replaced letters with internet numbers.
 *
 * @str: the string in question.
 *
 * Return: str.
 */

char *leet(char *str)
{
	int i, j;

	char alpha[80] = "aAeEoOtTlL";
	char numbers[80] = "4433007711";

	for (i = 0; str[i] != '\0'; ++i)
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (str[i] == alpha[j])
			{
				str[i] = numbers[j];
			}
		}
	}
	return (str);
}
