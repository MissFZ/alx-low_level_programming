#include "main.h"

/**
  *main - Entry code
  *Description:prints the alphabet, in lowercase
  *Return: ko
  */
void print_alphabet(void);
{
	char i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
