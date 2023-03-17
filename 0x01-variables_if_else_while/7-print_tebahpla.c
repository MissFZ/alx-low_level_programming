#include <stdio.h>
/**
  *main - Entry point
*Discription:putchar
*Return:Alaways 0
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
