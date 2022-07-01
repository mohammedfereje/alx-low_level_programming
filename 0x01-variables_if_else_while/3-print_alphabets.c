
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int x = 'a';
	int Y='A';
	for( ;x <= 'z'; x++) 
    {
        
        putchar(x);
    }
    	for( ;Y <= 'Z'; Y++) 
    {
       
        putchar(Y);
    }
     putchar('\n');
	return (0);
}
