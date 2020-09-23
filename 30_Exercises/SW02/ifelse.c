#include <stdio.h>

int main(int argc, char* argv[])
{
	int testvalue = 1;
	int limitvalue = 2;
	if(testvalue >= limitvalue)
	{
		printf("%d is bigger or equal to %d\n", testvalue, limitvalue);
	}
	else{
		printf("%d is less than %d\n", testvalue, limitvalue);
	}
	return 0;
}
