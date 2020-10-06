#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	float max = 0, min = 0, sum = 0, prod = 0, rat = 0;
	// make sure, we have exactly 2 arguments
	if( argc != 3 )
	{
		// usage message 
		printf("usage: Bitte geben Sie 2 Fliesskommazahlen an: \n");
	}
	else
	{
		float value1 = atof(argv[1]);
		float value2 = atof(argv[2]);
		max = (value1 > value2) ? value1 : value2;
		min = (value1 < value2) ? value1 : value2;
		printf("Zahl 1: %0.3f, Zahl 2: %0.3f\n", min, max);
		sum = value1 + value2;
		prod = value1*value2;
		rat = max/min;
		printf("Summe: %0.3f\nProdukt: %0.3f\nRatio: %0.3f\n", sum, prod, rat);
	
	}
	
	
	return 0;
}
