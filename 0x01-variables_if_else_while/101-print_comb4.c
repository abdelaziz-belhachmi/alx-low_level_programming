#include <stdio.h>
/**
 * main- main
 *
 * Return:always 0 (Success)
 */
int main(void)
{
int i, j, t;
for ( i = 0; i < 10; i++)
{
for( j = i + 1; j < 10; j++)
{
for ( t = j + 1; t < 10; t++)
{
putchar(i + '0');
putchar(j + '0');
putchar(t + '0');
if (i < 7)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
