#include "main.h"
/**
* print_alphabet - prints the alphabet, in lowercase, followed by a new line
*Reaturn:void
*/
void print_alphabet(void)
{  
char c;
int i = 0;
while (i < 10)
{
c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
i++;
}
}
