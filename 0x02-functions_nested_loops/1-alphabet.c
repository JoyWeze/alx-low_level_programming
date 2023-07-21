#include "main.h"

/**
* main - function to print all alphabet in lowercase
*
* Return: 0 when successful
*/

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}

