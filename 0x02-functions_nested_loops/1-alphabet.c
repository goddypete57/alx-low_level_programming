#include "main.h"
/**
 * print_alphabet - abcd
 * Description: print lowercase alphabet
 * Return: void.
 */

void print_alphabet(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(alphabet[i]);
	}
	_putchar('\n');
}
