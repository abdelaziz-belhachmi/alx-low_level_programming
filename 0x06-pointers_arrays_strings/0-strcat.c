#include <stdio.h>
#include <string.h>
/**
 * _strcat - cat
 *@*dest: char
 *@*src: char
 *Return: a
 */
char *_strcat(char *dest, char *src)
{
char *a = dest;
char *b = src;
strcat(a,b);
return (a);
}
