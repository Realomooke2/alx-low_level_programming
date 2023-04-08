#include "main.h"

/**
 * get_endianness - sets the value of a bit to 1 at a given index
 * Return: 1 if little endian 0 if big endian
 */

int get_endianness(void)
{
	unsigned int a = 1;
	char *b = (char *)&a;

	if (*b)
		return (1);
	return (0);
}
