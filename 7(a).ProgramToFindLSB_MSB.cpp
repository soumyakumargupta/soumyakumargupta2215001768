//Program To Check LSB 
#include<stdio.h>
int main(){
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	if(num & 1)
		printf("LSB of %d is se(1).",num);
	else
		printf("LSB of %d is unset(0).",num);
	return 0;
}

