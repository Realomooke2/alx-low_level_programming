#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * str_concat - Concatenates two strings of any size
  * @s1: the first string to concatenate
  * @s2: the second string to concatenate
  *
  * Return: the two strings concatenated
  */
char *str_concat(char *s1, char *s2)
{
	int i = 0, n = 0, m = 0, l = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[n])
		n++;

	l = i + n;
	s = malloc((sizeof(char) * l) + 1);

	if (s == NULL)
		return (NULL);

	n = 0;

	while (m < l)
	{
		if (m <= i)
			s[m] = s1[m];

		if (m >= i)
		{
			s[m] = s2[n];
			n++;
		}

		m++;
	}

	s[m] = '\0';
	return (s);
}
