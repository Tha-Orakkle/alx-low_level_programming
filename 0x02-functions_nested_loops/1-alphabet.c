#include "main.h"
/**
 * main - prints the alphabet in lowercase and
 * it is followed by a new line
 */

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
