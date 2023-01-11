//Program To Find Third Angle Of A Triangle
#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter First Angle: ");
	scanf("%d",&a);
	printf("Enter Second Angle: ");
	scanf("%d",&b);
	c=180-a-b;				//Sum Of all angle of triangle is 180.
	printf("The third angle is: %d",c);
	return 0;
}
