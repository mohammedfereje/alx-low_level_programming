
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int x = 0;


	for( ;x <= 15; x++) 
    {
   int nu=x+'0';
   if(x==10)
     nu='a';
   if(x==11)
	 nu ='b';
   if(x==12)
	   nu='c';
   if(x==13)
	   nu='d';
   if(x==14)
	   nu='e';
   if(x==15)
	   nu='f';
   putchar(nu);
    }	
     putchar('\n');
      
	return (0);
}
