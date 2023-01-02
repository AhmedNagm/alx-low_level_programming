#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to prit
 *
 * Return: on success 1.
 * On error, -1 is returneed, and errno is set approriatly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
