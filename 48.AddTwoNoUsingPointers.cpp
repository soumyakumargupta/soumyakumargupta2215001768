//Add Two No. Using Pointers
#include<stdio.h>
int main(){
	int *p,*q,a,b,r;
	printf("Enter the num1: ");
	scanf("%d",&a);
	printf("Enter the num2: ");
	scanf("%d",&b);
	p=&a;	//Giving address of variables to pointers
	q=&b;
	r=*p+*q;
	printf("The sum of no.: %d",r);
//	printf("The sum of no. %d & %d is: %d.",a,b,*r);
	return 0;
}
