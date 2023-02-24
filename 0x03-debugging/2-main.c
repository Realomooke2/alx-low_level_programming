#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Print the largestof 3 integers
 *
 * Return: Always 0
 */
int main(void)
{
	int num1, num2, num3, largest;

	printf("Enter three integers: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	largest = num1;

	if (num2 > largest)
	{
		largest = num2;
	}

	if (num3 > largest)
	{
		largest = num3;
	}
	printf("The largest number is %d", largest);

	return (0);
}
