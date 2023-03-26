#include <stdio.h>
/**
 * _isdigit - _isdigit check if var is digit
 * @c: int
 * Return: ! if tru 0 otherwise
 */
int _isdigit(int c)
{
if (c > 47 && c < 58)
{
return (1);
}
else
{
return (0);
}
}
