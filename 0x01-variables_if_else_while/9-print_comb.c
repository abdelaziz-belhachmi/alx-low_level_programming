#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
 * main -main
 *
 * Return:Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 0; i < 10 ; i++)
{
putchar (i + '0');
putchar(' ');
if (i != 9)
{
putchar(',');
}
}
putchar ('\n');
return (0);
}
