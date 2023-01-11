//Program To Find Power & Square Root Of Any No.
#include<stdio.h>
#include<math.h>
int main(){
	int a,expo,c,i,d;
	printf("Enter a no.: ");
	scanf("%d",&a);
	d=sqrt(a);
	printf("The square root of given no. is: %d",d);
	printf("\nEnter a exponential power for finding power of given num: ");
	scanf("%d",&expo);
	for(i=0;i<expo;i++){
		c=a*a;
	}
	printf("The power of given no. is: %d",c);
	return 0;
}
