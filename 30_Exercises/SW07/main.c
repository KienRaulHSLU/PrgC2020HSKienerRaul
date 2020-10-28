#include <stdio.h>
#include "bitOperation.h"


int main(int argc, char *argv[])
{
	unsigned char myNumber = 0x10; //16
	printf("Before: %d\n", (unsigned char) myNumber);
	SetBitNInByte( &myNumber, 1);
	printf("After setting Bit 1: %d\n", (unsigned char) myNumber);
	SetBitNInByte( &myNumber, 7);
	printf("After setting Bit 7: %d\n", (unsigned char) myNumber);
	
	
	
	
	return 0;
}
