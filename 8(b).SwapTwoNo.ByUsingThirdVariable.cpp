//Program To Swao To No. By Using Third Variable
#include<stdio.h>
int main(){
	int a,b,temp;
	printf("Enter first number value: ");
	scanf("%d",&a);
	printf("Enter second number value: ");
	scanf("%d",&b);
	printf("a=%d\nb=%d",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("\nAfter Swapping!!.....");
	printf("\na=%d\nb=%d",a,b);
	return 0;
}
