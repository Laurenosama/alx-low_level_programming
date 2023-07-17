#include <stdlib.h>
#include <time.h>
#include <stdio.h>



int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
 if (n > 0)
	 printf("%i is positive\n", n);
 else if (n == 0)
	 printf("%i neither nor\n, n);
 else
	 printf(" % i n is negative\n, n);
	return (0);
}
