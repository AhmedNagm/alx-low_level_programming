/*
 * File: 1-strncat.c
 * Auth: Ahmed Nagm
 * Project: ALx
 */

#include "main.h"

/**
 * _strncat - concats two strings with a specific range
 * @dest: String to add to.
 * @src: String to add from.
 * @n: range of copy.
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
