#include <stdio.h>

int main(int argc, char* argv[])
{
	short largeshort = 32760;
	printf("before: %d ", largeshort);
	largeshort = largeshort + 12345;
	printf("after: %d \n\n", largeshort);
	
	int numerator = 19, denominator = 5, result = 0;
	printf("before: num %d, den %d, res %d \n", numerator, denominator, result);
	
	result = numerator/denominator;
	printf("after: num %d, den %d, res %d \n\n", numerator, denominator, result);
	
	float e = 2.718281828f;
	printf("before: %f \n", e);
	
	e++;
	printf("after ++: %f \n", e);
	
	e--;
	printf("after --: %f \n\n", e);
	
	double dblnumber = 12.8;
	printf("before: %f \n", dblnumber);
	
	//nicht zulässig!
	//dblnumber = dblnumber%3;
	//printf("after: %f \n", dblnumber);
	
	return 0;
}
