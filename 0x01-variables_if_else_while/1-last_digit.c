#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* my code */
	digit = n % 10; /* gets last digit */

	if (digit  > 5) {
		printf("The last digit of %i is %i and is greater than 5\n", n, digit);
	}
	else if (digit == 0) {
		printf("The last digit of %i is %i and is 0\n", n, digit);

	}
	else if (digit < 6 && digit !=0) {
		printf("The last digit of %i is %i and is less than 6 and not 0\n", n, digit);
	}

	return (0);
} 

//57569//

//n = 57564
//digit = 9
//digit = 57569 % 10
//digit = 4
