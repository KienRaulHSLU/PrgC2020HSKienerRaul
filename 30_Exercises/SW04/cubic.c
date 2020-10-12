#include <stdio.h>
#include <stdlib.h>


	
long ComputeCubic( long x )
{
	long xCubed = 0;
	xCubed = x*x*x;
	return xCubed; 
}

int main(int argc, char* argv[])
{
	long input = atoi(argv[1]);
	long xCubed = 0;
	
	printf("Input Value: %ld\n", input);
	
	xCubed = ComputeCubic( input );
	
	printf("Cubic Vale: %ld\n", xCubed);
	
	
	
	return 0;


}
