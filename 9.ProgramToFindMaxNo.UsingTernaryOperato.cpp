//Program To Find Max No. Using ternary Operator 
#include<stdio.h>
int main(){
	int a,b,c,max;
	printf("Enter first number: ");
	scanf("%d",&a);
	printf("Enter second number: ");
	scanf("%d",&b);
	printf("Enter third number: ");
	scanf("%d",&c);
	max=(a>b && a>c)?(a):((b>c)?(b):(c));
	printf("Max No. is: %d",max);
	return 0;
}
