#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *main(void) is the main funtion that embodies other funtion
 *and its type is int
 *and it contains no argument hence the void
 *the program assigns a random number to the variable n
 *each time it is executed
 *and it returns an integer then 0 when the task is completed
*/
int main(void) /*void always return zero no argument for voide*/
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
		else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
		else
	{
		printf("%d is negative\n", n);
	}	/* your code goes there */
	return (0);
}
