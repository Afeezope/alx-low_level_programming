#include <unistd.h>

/**
 * _putchar - writes the character n to stdout
 * @n: the character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately
 */

int _putchar(int n)
{
	return (write(1, &n, 1));
}
