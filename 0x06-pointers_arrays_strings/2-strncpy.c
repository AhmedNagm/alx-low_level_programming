/*
 * File: 2-strncpy.c
 * Auth: Ahmed Nagm
 * Project: ALx
 */

#include "main.h"

/**
 * _strncpy - concats two strings with a specific range
 * @dest: String to add to.
 * @src: String to add from.
 * @n: range of copy
 * Return: dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++) /* to add remaining n's as nulls - case n is greater i*/
	{
		dest[i] = '\0';
	}

	return (dest);
}
