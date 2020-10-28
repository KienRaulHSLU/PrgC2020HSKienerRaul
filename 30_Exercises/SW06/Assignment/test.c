#include <stdio.h>

int main ()
{
	FILE *fp;
	int c;
	
	fp = fopen("pressureSpike.bin", "rb");
	while(1)
	{
		c = fgetc(fp);
		if( feof(fp) ) {
			break;
		}
		printf("%c", c);
	}
	fclose(fp);
	
	return(0);
}

