/**
 * swap_int - swaps the values of two integers
 * using two input parameters
 * @a: input parameter 1
 * @b: input parameter 2
 */

void swap_int(int *a, int *b)
{
	int par;

	par = *a;
	*a = *b;
	*b = par;
}
