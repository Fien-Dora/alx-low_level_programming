#include "main.h"
/**
* print_alphabet - prints the alphabet, in lowercase, followed by a new line
*Reaturn:void
*/
void print_alphabet(void)
{
char ch;
int i = 0;
ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
i++;
}
_putchar('\n');
}
