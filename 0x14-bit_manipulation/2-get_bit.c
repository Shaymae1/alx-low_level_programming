#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns the value of a bit at a given index
 * @n: Number to check the value
 * @index: the index of the bit to get, starting from 0
 *
 * Return: the value of the bit at index, or -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > (sizeof(8) * 8))
		return (-1);

	for (i = 0; i < index; i++)
		n = n >> 1;
	return ((n & 1));
}
