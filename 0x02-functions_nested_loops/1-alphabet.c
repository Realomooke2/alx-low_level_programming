#include "main.h"

/**
 *
 * main - Prints the alphabet in lowercase, followed by a new lin
 * 
 * Return: Always 0 (success)
 *
 */

void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
		_putchar(l);

	_putchar('\n');
}
