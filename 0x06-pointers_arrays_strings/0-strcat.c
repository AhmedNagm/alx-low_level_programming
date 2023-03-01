/*
 * File: 0-strcat.c
 * Auth: Ahmed Nagm
 * Project: ALx
 */

#include "main.h"

/**
 * _strncat - concats two strings
 * @dest: String to add to.
 * @src: String to add from.
 *
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{

	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
