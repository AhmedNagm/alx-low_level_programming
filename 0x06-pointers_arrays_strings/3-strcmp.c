/*
 * File: 3-strcmp.c
 * Auth: Ahmed Nagm
 * Project: ALx
 */

#include "main.h"

/**
 * _strcmp - compares between strings
 *
 * @s1: string 1 String to add to.
 * @s2: String to add from.
 *
 * Return: 0.
 */

int _strcmp(char *s1, char *s2)
{

	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
