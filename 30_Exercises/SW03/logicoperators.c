#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	int value1 = 0, value2 = 0, value3 = 0;
	int max = 0;
	int min = 0, sum = 0;
	float avg = 0;
	//make sure we have exactly 3 arguments
	if( argc != 4)
	{
		//usage massage
		printf("usage: logicOperators val1 val2 val3\n");
	}
	else 
	{
		value1 = atoi(argv[1]);
		value2 = atoi(argv[2]);
		value3 = atoi(argv[3]);
		
		if( value1 <= 0 || value2 <= 0 || value3 <= 0)
		{
			printf("The entered values are not all positive. Exiting\n");
		}
		else
		{ 		
	
			printf("Value1: %d, Value2: %d, Value3: %d\n", value1, value2, value3);
			
			
			max = (value1 > value2) ? value1 : value2;
			max = (max > value3) ? max : value3;
			
			min = (value1 < value2) ? value1 : value2;
			min = (min < value3) ? min : value3;
			
			sum = value1 + value2 + value3;
			
			avg = (float)sum/3;		
			
			printf("The largest of the entered values is: %d\n", max); 
			printf("The smallest of the entered values is: %d\n", min);
			printf("The sum of the entered values is: %d\n", sum);
			printf("The average of the entered values is: %f\n", avg);	
						
			}
		
				
		
		}
	
	return 0;
}
