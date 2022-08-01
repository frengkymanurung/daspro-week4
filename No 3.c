#include <stdio.h>
int main()
{
	float x = 10;
	float y = 17;
	
	printf("y = %.1f", ((x-=5)*y)/10);
	
	return 0;
}
