#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assigns a random value to int n everytime
 * it executes and prints it 
 * Retun: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time (0));
	n = rand() - Rand_max / 2;
	
	if (n>0)
		printf("is positive\n");
	else if (n==0)
		printf("is zero\n");
	else if (n<0)
		printf("is negative\n");
	return (0);
}

