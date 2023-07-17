#include <stdio.h>

/**
 * main - main function to print alphabets without some letters
 *
 * Return: 0 when succesful
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
