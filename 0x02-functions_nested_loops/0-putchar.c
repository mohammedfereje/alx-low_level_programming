#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main -entry point
 *
 * Return: always 0.
 */
int main(void)
{
char ar[10] = "_putchar";
int i = 0;
while (ar[i] != '\0')
{
putchar(ar[i]);
i++;
}
putchar('\n');
return (0);
}
