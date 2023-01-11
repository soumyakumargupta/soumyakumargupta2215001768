//Program To Check A Triangle Is Equilateral, Isosceles Or Scalene Triangle
#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter first side of triangle: ");
	scanf("%d",&a);
	printf("Enter second side of triangle: ");
	scanf("%d",&b);
	printf("Enter third side of triangle: ");
	scanf("%d",&c);
	if(a==b && b==c){
		printf("\nTriangle is Equilateral");
	}
	else if(a==b||b==c||c==a){
		printf("\nTriangle is Isosceles");
	}
	else{
		printf("\nTriangle is Scalene");
	}
	return 0;
}
