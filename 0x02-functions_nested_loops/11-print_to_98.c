#include "main.h"
void print_to_98(int n)
	{
		int count;
		if (n > 98)
			for (count = n; count > 98; count--)
				printf("%d", count);
		else
			for (count = n; count < 98; count++)
				printf("%d", count);
		prin tf("98\n");
	}