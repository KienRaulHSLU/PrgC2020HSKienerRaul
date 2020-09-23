//Team: Raul Kiener, Marc Wenger, Adrian Bodenstein
#include <stdio.h>

int main(int argc, char* argv[])
{
	int start = 1;
	
	while(start == 1){ 
		int readValue = 0;
		printf("Enter a number between (including) 0 and 9 to display the number as text. Enter 10 to stop the program: ");
		scanf("%d", &readValue);
	
		switch(readValue){
			case 0:
				printf("0 as text is 'zero'\n");
				break;
			case 1:
				printf("1 as text is 'one'\n");
				break;
			case 2:
				printf("2 as text is 'two'\n");
				break;
			case 3:
				printf("3 as text is 'three'\n");
				break;	
			case 4:
				printf("4 as text is 'four'\n");
				break;
			case 5:
				printf("5 as text is 'five'\n");
				break;
			case 6:
				printf("6 as text is 'six'\n");
				break;	
			case 7:
				printf("7 as text is 'seven'\n");
				break;
			case 8:
				printf("8 as text is 'eight'\n");
				break;
			case 9:
				printf("9 as text is 'nine'\n");
				break;
			case 10:
				printf("Thank You. Good Bye.\n");
				start = 0;
				break;					
			default:
				printf("invalid -> tray again\n");
				break;
			}
		}
	
	
	return 0;
}
