#include <stdio.h>

/**
 * main - finds and prints the first 98 fabonacci numbers
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, next;

	j = 1;
	k = 2;
	printf("%d, ", j);
	printf("%d, ", k);
	for (i = 0; i <= 98; i++)
	{
		next = j + k;
		j = k;
		k = next;
		printf("%d, ", next);
		printf(" ");
	}
	return (0);
}
