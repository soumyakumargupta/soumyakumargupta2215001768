//Program To Check MSB 
#include<stdio.h>
#define BITS sizeof(int)*8
int main(){
	int num,msb;
	printf("Enter the number: ");
	scanf("%d",&num);
	msb=1<<(BITS-1);
	if(num & 1)
		printf("MSB of %d is se(1).",num);
	else
		printf("MSB of %d is unset(0).",num);
	return 0;
}

