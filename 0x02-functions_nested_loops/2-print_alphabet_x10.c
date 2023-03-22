#include <stdio.h>
/**
 *print_alphabet_x10 - print_alphabet
 *
 *return:always 0 (success)
 */
void print_alphabet_x10(void);

void print_alphabet_x10(void)
{
char alpha[] = "abcdefghijklmnopqrstuvwxyz\n";
int a = 0;
int i = 0;
while (a < 10)
{
a++;
i = 0;
while (alpha[i] != '\0')
{
putchar((int)alpha[i]);
i++;
}
}
}
