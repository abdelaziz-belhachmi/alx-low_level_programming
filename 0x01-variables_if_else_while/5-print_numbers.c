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
char A[] = "0123456789\n";
int i = 0;

while (A[i] != '\0')
{
putchar(A[i]);
i++;
}
	return (0);
}
