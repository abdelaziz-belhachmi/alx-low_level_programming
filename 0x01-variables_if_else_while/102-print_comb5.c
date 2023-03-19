#include <stdio.h>
/**
* main- main
*
* Return:always 0 (Success)
*/
int main(void){
int a, b;
for (a = 0; a < 100; a++)
{
for (b = a+1; b < 100; b++)
{
putchar(a + '0');
putchar(' ');
putchar(b + '0');
if (a < 99)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
