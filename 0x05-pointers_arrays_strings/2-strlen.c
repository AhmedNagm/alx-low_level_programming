/*
 * File: 2-strlen.c
 * Auth: Ahmed Nagm
 * Project: ALX
 */
#include "main.h"
/**
 * _strlen - prints the length of a string.
 * @s: string for count
 *
 * Return: len.
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
	return (len);
}
