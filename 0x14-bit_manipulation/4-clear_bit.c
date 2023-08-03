#include "main.h"

/**
 * clear_bit - sets the value of a bit at a given index to 0
 * @n: pointer to the number to clear the bit in
 * @index: the index of the bit to clear, starting from 0
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	mask = 1;
	mask = mask << index;
	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	if (((*n >> index) & 1) == 1)
		*n = mask ^ *n;

	return (1);
}
