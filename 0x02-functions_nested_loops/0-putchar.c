#include <stdio.h>
/**
 * main - main
 *
 * Return:always 0 (Success)
 */
int main(void)
{
int i = 0;
char c[] = "_putchar\n";
while (c[i] != '\0')
{
putchar((int)c[i]);
i++;
}
return (0);
}
