#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main- main
 *
 * Return:always 0 (Success)
 */
int main(void)
{
char Alphabets[] ="abcdefghijklmnopqrstuvwxyz\n";
int i=0;

while (Alphabets[i] != '\0')
{
putchar(Alphabets[i]);
i++;
}
	return (0);
}
