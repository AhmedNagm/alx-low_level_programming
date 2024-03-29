/*
 * File: 5-string_toupper.c
 * Auth: Ahmed Nagm
 * Project: ALx
 */

#include "main.h"

/**
 * string_toupper - capitalize  a string.
 *
 * @str: the string in question.
 *
 * Return: str.
 */

char *string_toupper(char *str)
{

	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
