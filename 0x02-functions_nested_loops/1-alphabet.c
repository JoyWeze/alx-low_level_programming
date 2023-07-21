#include "main.h"

/**
 *  print_alphabet - funtion to print all alphabets in lower case
 *
 *  Return: 0 when successful
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		_putchar(i);
	_putchar('\n');
}
