#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting form 0,
 * followed by a new line
 * Return: 0 if executed successfully
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
