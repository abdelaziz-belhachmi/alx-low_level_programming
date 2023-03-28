#include
/**
 *swap_int - swap integers
 *@a: var
 *@b: var
 *return: void
 */
void swap_int(int *a, int *b)
{
int *x = a;
int *y = b;
int tmp;
tmp = *y;
*y = *x;
*x = tmp;
}
