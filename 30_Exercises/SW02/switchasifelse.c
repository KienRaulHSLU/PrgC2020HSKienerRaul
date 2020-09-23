#include <stdio.h>

int main(int argc, char* argv[])
{
	int switchvalue = 2;
	
	if( switchvalue == 1)
	{
		//case 1:
		printf("Switch Value: 1\n");
	}
	else if(switchvalue == 2)
	{
		//case 2:
		printf("Switch Value: 2\n");
	}
	else
	{
		//case 3:
		printf("Switch Value: no valid switch\n");
	}
	return 0;
}
