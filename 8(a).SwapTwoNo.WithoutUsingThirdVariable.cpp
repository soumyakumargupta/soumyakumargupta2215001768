//Program To Swao To No. Without Using Third Variable
#include<stdio.h>
int main(){
	int a,b;
	printf("Enter first number value: ");
	scanf("%d",&a);
	printf("Enter second number value: ");
	scanf("%d",&b);
	printf("a=%d\nb=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nAfter Swapping!!.....");
	printf("\na=%d\nb=%d",a,b);
	return 0;
}
