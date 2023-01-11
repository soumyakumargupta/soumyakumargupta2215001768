//Program To Perform All Arithmetic Operations
#include<stdio.h>
int main(){
	int a,b,add,subt,mul,div,rem;
	printf("Enter First Number: ");
	scanf("%d",&a);
	printf("Enter Second Number: ");
	scanf("%d",&b);
	add=a+b;
	subt=a-b;
	mul=a*b;
	div=a/b;
	rem=a%b;
	printf("\nAddition of %d & %d = %d",a,b,add);
	printf("\nSubtraction of %d & %d = %d",a,b,subt);
	printf("\nMultiplication of %d & %d = %d",a,b,mul);
	printf("\nDivision of %d & %d = %d",a,b,div);
	printf("\nRemainder of divison between %d & %d = %d",a,b,rem);
	return 0;
}
