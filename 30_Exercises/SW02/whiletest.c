#include <stdio.h>

int main(int argc, char* argv[])
{
	int limitvalue = 200;cd
	int maxloopexe = 100;
	int counter = 0;
	while(counter < limitvalue){
		counter++;
		if (counter > maxloopexe){
			break;
		}
		printf("# of while loops: %d\n", counter);
	}
	
	
	return 0;
}
