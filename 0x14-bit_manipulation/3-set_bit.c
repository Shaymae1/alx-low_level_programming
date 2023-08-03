#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * set_bit - sets the value of a bit at a given index to 1
 * @n: pointer to the number to set the bit in
 * @index: the index of the bit to set, starting from 0
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)

{
	unsigned int aux;

	if (index > sizeof(unsigned int) * 16)
		return (-1);
	aux = 1;
	aux = aux << index;
	*n = ((*n) | aux);
	return (1);
}
