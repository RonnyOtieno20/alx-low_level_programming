#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rand()
{
	static int count = 0;
	int nums[] = {9, 8, 10, 24, 75, 9};

	if (count < 6)
	{
		return (nums[count++]);
	}

	return (rand());
}