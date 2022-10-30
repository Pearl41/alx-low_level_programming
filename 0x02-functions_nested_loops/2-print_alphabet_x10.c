#include "main.h"

int
main(void)
{
	print_alphabet_x10();
	return 0;
}

void
print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c++);
	}
	_putchar('\n');
}


void
print_alphabet_x10(void)
{
	char c;

	for (c = 0; c < 10; c++)
	{
		print_alphabet();
		_putchar('\n');
	}
}
