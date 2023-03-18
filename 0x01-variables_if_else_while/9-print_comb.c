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
int A[9] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
int i = 0;
while (i < 9)
{
putchar(A[i] + ',');
putchar(' ');
i++;
}
putchar('9');
putchar('\n');
	return (0);
}
