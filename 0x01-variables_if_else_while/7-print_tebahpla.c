#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/*main()-entry point*/

int main(void)
{
	int x = 'z';

	for (  ; x >= 'a'; x--)
		putchar(x);
putchar('\n');
	return (0);
}
