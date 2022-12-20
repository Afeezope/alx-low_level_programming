#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - assigns a random number to int n everytime it executes, and prints it
 * Return: 0 if successfully executed
 */
int main()
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n",n);
	else if (n ==0)
		printf("%d is zero\n",n);
	else if (n < 0)
		printf("%d is negative\n",n);
	return (0);
}
