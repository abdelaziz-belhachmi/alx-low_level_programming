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
int A[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int i = 0;
while (i < 10)
{
putchar(A[i] + '0');
i++;
}
putchar('\n');
	return (0);
}
