#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9
 *               only use _putchar twice
 *
 * Return: void
*/

void print_numbers(void)
{
	char i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + 48);
	}
	_putchar('\n');
}
