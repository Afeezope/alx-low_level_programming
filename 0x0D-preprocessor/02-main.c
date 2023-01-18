#include <stdio.h>

/**
 * main - Prints the name of file it was comipiled from
 *		followed by new line
 * Return: 0 (success)
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
