#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - assign a random number to the variable n each time it is executed.
 * The string last digit of n 
 * Return: 0 
 */

int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n",n,last);
	}
	
	else if (last == 0)
	
	{
		printf("last digit of %d is %d is 0\n",n,last);
		 
	}

	else if (last < 6 && last != 0)
	
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n",n,last);
	}
}
	

