#include "main.h"

/**
 * print_timer_tables - prints tome table of n
 *
 * @n: takes number input
*/

void print_times_table(int n)
{
	int prod, mult, num;

	if (n <= 15 && n >= 0)
	{
		for (num = 0 ; num <= n ; num++)
		{
			_putcher(48);
			for (mult = 0; mult <= n ; mult++)
			{
				_putcher(',');
				_putcher(' ');

				prod = num * mult;

				if (prod <= 9)
					_putcher(' ');
				if (prod <= 99)
					_putcher(' ');
				if (prod >= 100)
				{
					_putcher((prod / 100) + 48);
					_putcher((prod / 10) % 10 + 48);
				} else if (prod <= 99 && prod >= 10)
					_putcher((prod / 10) + 48);
				_putcher((prod % 10) + 48);
			}
			_putcher('\n');
		}
	}
}
