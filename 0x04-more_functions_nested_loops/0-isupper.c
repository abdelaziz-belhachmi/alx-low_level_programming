#include <stdio.h>
/**
 *_isupper:_isuppper
 *@c:ascii of any char given

 *Return: 1 pr 0 (Success)
 */
int _isupper(int c)
{
if (c > 64 && c < 91)
{
return (1);
}
else
{
return (0);
}
}
