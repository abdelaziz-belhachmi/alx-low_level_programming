#include <stdio.h>
/**
 * main- main
 *
 * Return:always 0 (Success)
 */
int main(void){
int i, j;
int a, b;
for (a = 0; a < 10; a++)
{
for (b = 0; b < 10; b++)
{
for (i = a; i < 10; i++)
{
for (j = b + 1; j < 10; j++)
{
putchar(a + '0');
putchar(b + '0');
putchar(' ');
putchar(i + '0');
putchar(j + '0');
if (b < 10)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}