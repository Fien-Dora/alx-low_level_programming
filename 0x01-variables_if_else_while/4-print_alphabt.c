#include <stdio.h>

/**
 * main - prints alphabets in lowercase and uppercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'q' && i == 'e')
			continue;
		putchar(i);
	}
	return (0);
}