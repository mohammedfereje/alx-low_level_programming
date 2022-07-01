
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int x = 'a';
	
	for(;x <= 'z'; x++) 
    {
    	if(x=='q' || x=='e')
    	continue;
       
        putchar(x);
    }
    	
     putchar('\n');
	return (0);
}
