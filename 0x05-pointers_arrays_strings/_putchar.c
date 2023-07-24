#include <unistd.h>

int _putchar(char c)
{
	return (writw(1, &c, 1));
}
