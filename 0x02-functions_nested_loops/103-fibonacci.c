#include <stdio.h>
#include <stdlib.h>
/**
* main -  prints the first 50 Fibonacci numbers, starting with 1 and 2, followed by a new line. The numbers must be separated by comma, followed by a space.
*
* Return: Always (Success)
*/
int main(void)
{
	double a = 0;
	double b = 1;
	double sum = 0;
	double f;
	int i, pair;

	for (i = 0; i < 32; i++)
	{
		f = a + b;
		pair = f;

	if (pair % 2 == 0)
	sum = sum + f;
	a = b;
	b = f;
	}
	printf("%.f\n", sum);
	return (0);
}
