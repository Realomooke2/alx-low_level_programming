#include "main.h"

/**
 *  * largest_number - returns the largest of 3 numbers
 *   * @a: first integer
 *    * @b: second integer
 *     * @c: third integer
 *      * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int num1, num2, num3, largest;

	printf("Enter three numbers: ");
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

	printf("The largest number is %d\n", largest);

	return 0;
}
