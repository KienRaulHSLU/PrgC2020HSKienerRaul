#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int x;
	int y;
} Point2D;

typedef struct {
	Point2D pointTopLeft;
	Point2D pointBottomRight;
	double area;
} Rectangle;

#define NUM_RECTANGLES 10
Rectangle myRectangles[NUM_RECTANGLES];

void PrintRectangleArray( Rectangle myRectangles[], int ArrayLength);
void PrintRectangle( Rectangle myRectangle ); 
double ComputeRectangleArea( Rectangle myRectangle ); 

int main(int argc, char* argv[])
{
	//init random number generator
	srand(42);
	
	//init rectangles with random numbers
	for(int i = 0; i < NUM_RECTANGLES; i++)
	{
		//random coordinates for topleft
		myRectangles[i].pointTopLeft.x = rand() % 500 - 250;
		myRectangles[i].pointTopLeft.y = rand() % 500 - 250;
		
		//make sure bottomright is to the right of topleft and below topleft (between 1 and 100)
		myRectangles[i].pointBottomRight.x = myRectangles[i].pointTopLeft.x + rand() % 100 + 1;
		myRectangles[i].pointBottomRight.y = myRectangles[i].pointTopLeft.y - rand() % 100 + 1;
		
		//fill in area
		myRectangles[i].area = ComputeRectangleArea(myRectangles[i]);
	}
	
	
	PrintRectangleArray(myRectangles,NUM_RECTANGLES);
	
	
	
	return 0;
}

//print a single rectangle
void PrintRectangle( Rectangle myRectangle ){
	printf("%d\t%d\t\t%d\t%d\t\t%f\n", \
	myRectangle.pointTopLeft.x, myRectangle.pointTopLeft.y, \
	myRectangle.pointBottomRight.x, myRectangle.pointBottomRight.y, \
	myRectangle.area);
} 

void PrintRectangleArray( Rectangle myRectangles[], int ArrayLength){
	for(int i = 0; i < NUM_RECTANGLES; i++)
	{
		PrintRectangle(myRectangles[i]);
	}
}

double ComputeRectangleArea( Rectangle myRectangle ){
	double area = 0.0;
	Point2D p1 = myRectangle.pointTopLeft;
	Point2D p2 = myRectangle.pointBottomRight;
	
	int deltaX = (p2.x - p1.x);
	int deltaY = (p1.y - p2.y); 
	area = deltaX * deltaY;
	return area;
}
	
	
	
	



