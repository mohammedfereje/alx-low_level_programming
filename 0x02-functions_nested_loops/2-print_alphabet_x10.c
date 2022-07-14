#include "main.h"
void print_alphabet_x10()
{
int i = 0;
while (i < 10)
{
	char c = 'a';
	while ( c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	i++;
}
putchar('\n');
}
