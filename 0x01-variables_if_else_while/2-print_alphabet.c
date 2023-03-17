#include <stdio.h>
/**
 *main - Entry code point
 *Discription:Read the caracters
 *Return: Always 0 (Success)
*/
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
