#include <stdio.h>
/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 */
int main ()
{
char c[100] ="and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

int i =0;

while (c[i]!='\0'){
putc(c[i],stdout);
i++;
}
return 1;
}
