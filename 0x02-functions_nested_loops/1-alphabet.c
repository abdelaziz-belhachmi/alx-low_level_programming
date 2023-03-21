#include <stdio.h>
/**
 *print_alphabet - print_alphabet
 *
 *return:always 0 (success)
 */
void print_alphabet(void);

void print_alphabet(void)
{
char alpha[] = "abcdefghijklmnopqrstuvwxyz\n";
int i = 0;
while (alpha[i] != '\0')
{
putchar((int)alpha[i]);
i++;
}
}
