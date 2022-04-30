#include <stdio.h>
#include <math.h>

int main(void) 
{
    int triangle_side;
    float triangle_area, temp_vairable;
    
    printf("Enter the side of the triangle :-\n");
    scanf("%d",&triangle_side);
    
    temp_vairable=sqrt(3)/4;
    triangle_area=temp_vairable*triangle_side*triangle_side;
    printf("Area of Equilateral Triangle is:%f\n23",triangle_area);
	// your code goes here
	return 0;
}

