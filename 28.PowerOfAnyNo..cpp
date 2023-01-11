//POWER OF ANY NO.
#include <stdio.h>
#include<math.h>
int main(){
	int a,b,power;
	printf("Enter the value: ");
	scanf("%d",&a);
	printf("Enter the base value: ");
	scanf("%d",&b);
	power=pow(a,b);
	printf("The power of %d is: %d",a,power);
}

