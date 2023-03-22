#include <stdio.h>
/**
 * _islower -
 *
 * Return:always (Success)
 */
int _islower(int c);
int _islower(int c)
{
if (c > 97 && c < 122)
{
return (1);
}
else
{
return (0);
}
}
