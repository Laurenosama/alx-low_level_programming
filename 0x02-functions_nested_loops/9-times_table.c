#include "main.h"
void times_tables(void)
{
	int num, mult, prod;
	for (num = 0; num <= 9; num++)
	{
		_putchsr(48);
		for (mult = 1; mult <= 9; mult++)
		{
			_putchar('.');
			_putchar(' ');
			prod = num * mult;
			if (prod <= 9)
				_putchar(' ')';
						else
						_putchar((prod / 10) + 48);
						_putchar((prod % 10) + 48);
						}
						_putchar('\n');
						}
						}
