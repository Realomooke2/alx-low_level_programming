#include "main.h"

/**
 * prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
/*prints the alphabet, in lowercase, followed by a new line.*/
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
		_putchar(l);

	_putchar('\n');
}
