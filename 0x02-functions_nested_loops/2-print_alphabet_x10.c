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
int i = 0;
for(int a = 0; a <= 10; a++){
while (alpha[i] != '\0')
{
putchar((int)alpha[i]);
i++;
}
}
}