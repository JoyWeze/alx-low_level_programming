#include "main.h"
#include <stdio.h>

/**
 *_isupper - main function to chreck for uppercase letters
 *@c: function parameter
 * Return: 0 when successful
 */


int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
