#include <stdio.h>
/**
 *_isalpha - function to check is a char is an alphabet
 * @c: is a variable that we need to check if it is a char
 * Description: if alphabet return 1 else return 0
 * Return: either 1 or 0 (Success)
 */
int _isalpha(int c);
int _isalpha(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
