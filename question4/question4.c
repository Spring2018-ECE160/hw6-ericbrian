#include <stdio.h>
#include <math.h>

struct point{
	float x;
	float y;
};

int main()
{
	struct point point_array[10];
	int x_value = -5;
	int a, b, c;
	int i;
	
	printf("\nEnter a value for a:");
	scanf("\n%d", &a);
	printf("\nEnter a value for b:");
	scanf("\n%d", &b);
	printf("\nEnter a value for c:");
	scanf("\n%d", &c);
	
	for(i = 0; i < 11; i++)
	{
		point_array[i].x = x_value;
		point_array[i].y = (a * pow(x_value,2)) + (b * x_value) + c;
		x_value++;
	}	
	
	x_value = -5;
	
	for(i = 0; i < 11; i++)
	{
		printf("\nX = %d	\n(%.0f,%f)", x_value++, point_array[i].x, point_array[i].y);
		
	}
	
	return 0;
}