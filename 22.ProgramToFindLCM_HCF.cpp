//Program To Find LCM[Lowest Common Factors] & HCF[HighestC.M] Of To Two Integers
#include<stdio.h>
int main(){
	int n,a,b,max,fact=1;
	printf("Enter first no.: ");	//Taking Two No.
	scanf("%d",&a);
	printf("Enter second no.: ");
	scanf("%d",&b);
	printf("Press 1 for LCM or Press 2 for HCF: "); 	//Taking Operation Type 
	scanf("%d",&n);
	max=(a>b)?a:b;
	if(n==1){			//For LCM
	while(fact){
		if(max%a==0 && max%b==0){
			printf("LCM of %d & %d is: %d\n",a,b,max);	//Printing LCM
			fact=0;
			}
		max++;
	}}
	else if(n==2){		//For HCF
		for(max;max>=1;max--){
		if(a%max==0 && b%max==0){
			break;									
		}}
	printf("HCF of %d & %d is: %d",a,b,max);	//Printing HCF
	}
	else{					//For Inputting Value Other Then 1&2
		printf("Invalid Operations!!");
	}
	return 0;
}
