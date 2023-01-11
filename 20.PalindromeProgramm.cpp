//PALINDROME NO.
#include<stdio.h>
int main(){
	int n,temp,rem,sum=0;
	printf("Enter a no. to chech whether PALINDROME or not: ");
	scanf("%d",&n);
	temp=n;
	while(n>0){
		rem=n%10;
		sum=(sum*10)+rem;
		n=n/10;
		
	}
	n=temp;
	if(n==sum)
		printf("PALINDROME NO.");
	else 
	 	printf("NOT A PALINFROME NO.");
	 }
	
	

