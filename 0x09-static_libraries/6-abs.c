#include "main.h"

/**
 * _abs - function that computes the absolue
 *       value of an integer
 *
 * @n: takes in integer type input for function
 *
 * Return: Always 0 (Success)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
