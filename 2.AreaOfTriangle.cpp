//Program To Find Area Of A Triangle When Height And Base Are Given
#include<stdio.h>
int main(){
	float a,b,area;
	printf("Enter Height Of Triangle: ");
	scanf("%f",&a);
	printf("Enter Base Of Triangle: ");
	scanf("%f",&b);
	area=0.5*a*b;
	printf("The Area of triangle is: %funit^2",area);
	return 0;
}
