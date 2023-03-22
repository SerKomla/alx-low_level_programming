#include "main.h"

/**
 * main - Prints _putchar as a message.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int count, ad;

	ad = sizeof(str) / sizeof(int);
	for (count = 0; count < ad; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
	return (0);
}
