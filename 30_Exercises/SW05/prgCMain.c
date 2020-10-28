//Teamarbeit mit Adrian Bodenstein, Marc Wenger & Raul Kiener
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef enum {
	MAIN_MENU = 1,
	NUMSTAT,
	CUBIC,
	FACTORIAL,
	NCHOOSEK,
	BINARY,
	ARRAY_TEST,
	EXIT
} MenuItem;


// function declarations
MenuItem PrintMainMenu( void );
void NumStat( double value1, double value2 );
long int ComputeCubic( long int x );
long Factorial( int n );
long Nchoosek( int n, int k );
void PrintBinary( unsigned int input );
void ArrayTest(void);


int main( int argc, char* argv[] )
{

	MenuItem menuSelected = MAIN_MENU;
	int run = 1, number, n, k = 0;
	double value1, value2 = 0;
	long int input = 0;	
	while(run)
	{
		switch(menuSelected){
			case MAIN_MENU:
				menuSelected = PrintMainMenu();
				break;
	
			case NUMSTAT:				
				printf("Enter two float numbers:\nNumber 1: ");
				scanf("%le", &value1);
				printf("Number 2: ");
				scanf("%le", &value2);
				printf("\n");
				NumStat( value1, value2 );
				printf("\n");
				menuSelected = MAIN_MENU;
				break;

			case CUBIC:
				printf("Enter a long int number: ");
				scanf("%ld", &input);
				printf("\n%ld cubed is %ld.\n\n", input, ComputeCubic(input));
				menuSelected = MAIN_MENU;
				break;
			
			case FACTORIAL:
				printf("Enter a int number: ");
				scanf("%d", &n);
				printf("\n");
				printf("The factorial of %d is %ld.\n\n", n, Factorial( n ));
				menuSelected = MAIN_MENU;
				break;
				
			case BINARY:
				printf("Enter a int number: ");
				scanf("%d", &number);
				printf("\n");
				PrintBinary( number );
				menuSelected = MAIN_MENU;
				break;
				
			case NCHOOSEK:
				printf("Enter a n: ");
    				scanf("%d",&n);
				printf("Enter a k: ");
				scanf("%d",&k);
				printf("The Nchoosek of %d and %d is %ld", n, k, Nchoosek(n, k));
				printf("\n\n");
				menuSelected = MAIN_MENU;
				break;

			case ARRAY_TEST:
				printf("\n***** ARRAY TEST *****\n");
				ArrayTest();
				menuSelected = MAIN_MENU;
				break;
				
			case EXIT:	
				run = 0;
				break;

			default:		
				printf("invalid menu selection\n\n");
				menuSelected = MAIN_MENU;
				break;
		}
	}

 	return 0;
}


// function implementations:
MenuItem PrintMainMenu( void )
{
	MenuItem selection = MAIN_MENU;
	printf("***********************************\n");
	printf("Main Menu\n");
	printf("***********************************\n\n");
	printf("Select from the following options:\n");
	printf("%d - Main Menu\n", MAIN_MENU);
	printf("%d - NumStat\n", NUMSTAT);
	printf("%d - Cubic\n", CUBIC);
	printf("%d - Factorial\n", FACTORIAL);
	printf("%d - Nchoosek\n", NCHOOSEK);
	printf("%d - Binary\n", BINARY);
	printf("%d - PrintArray\n", ARRAY_TEST);
	printf("%d - Exit\n", EXIT);
	printf("--> ");
	scanf("%d", (int*)&selection);
	printf("\n");
	return selection;
}	

void NumStat( double value1, double value2 ){
	if( value1 <= value2 ){
			printf("Inputs (in ascending order): %.3f %.3f\n", value1, value2);
		}
		else
		{
			printf("Inputs (in ascending order): %.3f %.3f\n", value2, value1);
		}

		printf("Sum: %.3f\n", value1 + value2);

		printf("Absolute Difference: %.3f\n", fabs(value1 - value2));

		printf("Product: %.3f\n", value1*value2);

		printf("Ratio (Input 2/ Input 1): %.3f\n", value2/value1);
}

long int ComputeCubic( long int x ){
	return x*x*x;
}

long Factorial( int n ){
    if (n>=1)
        return n*Factorial(n-1);
    else
        return 1;
}

void PrintBinary( unsigned int input ){
	unsigned int i = 0;

	printf("%d in binary form is 0b", input);

	for( i = (1 << 10 ); i > 0; i = (i>>1) )
	{
		if( input & i )
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
	printf(".\n\n");
}

long Nchoosek(int n, int k) {
	return Factorial(n)/(Factorial(k)*Factorial(n-k));
}

void PrintIntArray( int array[], int arrayLength ){
	for(int i = 0; i < arrayLength; i++)
	{
		printf("%d", array[i]);
	}
	printf("\n");
}

#define INTARRAYLENGTH 6
void ArrayTest(void){
	int intArray[6] = {0};
	PrintIntArray(intArray, INTARRAYLENGTH);
	for(int i= 0; i< INTARRAYLENGTH; i++)
	{
		intArray[i] = i;
	}
	PrintIntArray(intArray, INTARRAYLENGTH);
	printf("\n\n");
}
	
	
	
	
	
